#include "lock.ih"

Lock::Lock(string const &path)
:
    Lock(path, stringName(path, dirname))  // delegate to the 2nd constructor
{}