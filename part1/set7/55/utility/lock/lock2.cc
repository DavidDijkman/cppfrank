#include "lock.ih"

Lock::Lock(string const &path, string lockDir)
{
    int fileDescriptor = open(lockPath(path, lockDir));  

    if (fileDescriptor == -1)
        return;
    
    if (flock(fileDescriptor, LOCK_EX) == -1)
    {
        ::close(fileDescriptor);
        return;
    }

    d_fileDescriptor = fileDescriptor;
}