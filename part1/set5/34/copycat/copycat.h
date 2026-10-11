    #ifndef INCLUDED_COPYCAT_
    #define INCLUDED_COPYCAT_

    #include <iostream>

    class CopyCat
    {
        size_t d_size;
        char **d_data;

        public:
            CopyCat();                      // copycat1.f, copies environ
                                            // copycat2.cc
            CopyCat(size_t argc, char const *const *argv);  
                                            // copycat3.cc
            CopyCat(char const *const *data);// cp. any environ-like variable

        private:
                                            // copies a NTBS
            static char *ntbsCopy(char const *str);
                                            // return element count
            static size_t nElements(char const *const *data);
                                            // make deep copy of array
            static char **duplicate(char const *const *data, size_t count);
    };

    #include "copycat1.f"

    // the class currently does not use destructors, which means that the
    // class will leak memory when disposed of, since the previously allocated 
    // is not de-allocated.

    #endif

    
