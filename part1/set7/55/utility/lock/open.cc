#include "lock.ih"

    // by 

int Lock::open(string const &lockFile) const
{
    int mode = filesystem::exists(lockFile) ?   O_RDWR : 
                                                O_CREAT | O_TRUNC | O_RDWR;
    return ::open(lockFile.c_str(), mode, 0600);    
}
