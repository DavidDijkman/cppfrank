#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <string>


class Data
{

    union
    {
        double *u_double;
        std::string u_word;
        std::size_t u_value;
    };

    public:
        enum Type
        {
            DOUBLE,
            WORD,
            VALUE
        };

        // Constructors
        Data(double *doubles);         // data1.cc
        Data(const std::string &word); // data2.cc
        Data(std::size_t value);       // data3.cc

        // Copy and move constructors
        Data(const Data &other, Type type); // data4.cc
        Data(Data &&other, Type type);      // data5.cc

        // Destructor
        ~Data() = default; // must be empty

        // Operations
        void destroy(Type type);
        void swap(Data &other, Type thisType, Type otherType);

    private:

        // Field-specific destruction
        void destroyDouble();
        void destroyWord();
        void destroyValue();

        // Field-specific copying/moving
        void copyDoubles(const Data &other);
        void copyWords(const Data &other);
        void copyValue(const Data &other);

        void moveDoubles(Data &other);
        void moveWord(Data &other);
        void moveValue(Data &other);

        // Field-specific swapping
        void swapDoubleDouble(Data &other);
        void swapWordWord(Data &other);
        void swapValueValue(Data &other);

        void swapDoubleWord(Data &other);
        void swapDoubleValue(Data &other);

        void swapWordValue(Data &other);
        void swapWordDouble(Data &other);

        void swapValueDouble(Data &other);
        void swapValueWord(Data &other);

        // Static dispatch tables
        static void (Data::*s_destroy[])();

        static void (Data::*s_copy[])(const Data&);
        static void (Data::*s_move[])(Data&);

        static void (Data::*s_swap[][3])(Data&);
};

#endif