#include "lock.ih"

string Lock::stringName(string const &path,  char *(*fun)(char *))
{
    vector<char> copy(path.begin(), path.end());
    copy.push_back('\0');

    return fun(copy.data());            // build a string at once: the
}
