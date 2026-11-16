#ifndef INCLUDED_FCH_
#define INCLUDED_FCH_

#include <string>
#include <fstream>

class Fch
{
    enum Mode
    {
        ASK,
        CHANGE_ALL,
        NO_CHANGES
    };

    std::fstream d_file;

    std::string d_target;
    std::string d_replacement;
    std::string d_line;
    std::size_t d_pos;

    bool d_ok;

    Mode d_action = Mode::ASK;

    public:
        Fch(char const *fname);         // fch1.cc
        int run();

    private:
        void ask();
        bool findTarget();
        void modify();
        bool openInput(char const *fname);
        void process();
        char request() const;
        void searchReplace();
        void showModification() const;
        void insertLine() const;
};
        
#endif
