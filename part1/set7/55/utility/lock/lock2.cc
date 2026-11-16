#include "lock.ih"

Lock::Lock(string const &path, string lockDir)
{                                   // Open the lock file and acquire lock
    int fileDescriptor = open(lockPath(path, lockDir));  

    if (fileDescriptor == -1)
        return;
                                    // Acquire an exclusive lock on the file
    if (flock(fileDescriptor, LOCK_EX) == -1)
    {
        ::close(fileDescriptor);
        return;
    }

    d_fileDescriptor = fileDescriptor;
}