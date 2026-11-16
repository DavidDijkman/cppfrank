#include "lock.ih"

string Lock::lockPath(string const &path, string const &lockDir)
{                               
    // Create the lock file path from the given path and lock directory
    return lockDir + "/" + stringName(path, basename) + ".lck";
}
