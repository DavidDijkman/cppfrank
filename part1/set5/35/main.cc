#include "main.ih"

void showChar(char ch)
{
    // Function that prints each character with the number of times it appears
    // in the input stream
    unsigned char uchar = static_cast<unsigned char>(ch);

    cout << "char ";
    switch (ch)
    {
        case '\n':
            cout << "'\\n'";
            break;
        case '\t':
            cout << "'\\t'";
            break;
        case ' ':
            cout << "' '";
            break;
        default:
            if (isprint(uchar))
                cout << '\'' << ch << '\'';
            else
                cout << static_cast<unsigned int>(uchar);
            break;
    }
}

int main()
{
    CharCount charcount;
    charcount.count(cin);         

    // Extract character information
    CharCount::CharInfo const &info = charcount.info();

    // Print the character counts
    for (size_t i = 0; i != info.nCharObj; ++i)
    {
        showChar(info.ptr[i].ch);
        cout << ": " << info.ptr[i].count << " times\n";
    }
}