#include "lock.ih"

string Lock::stringName(string const &path,  char *(*fun)(char *))
{
    // Create a copy of the path string and pass it to the given function
    vector<char> copy(path.begin(), path.end());
    copy.push_back('\0');

    return fun(copy.data());
}
