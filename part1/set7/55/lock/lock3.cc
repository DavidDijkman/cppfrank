#include "lock.ih"

Lock::~Lock()
{
    if (d_fileDescriptor != -1)    // Close the file descriptor if it is valid
        ::close(d_fileDescriptor);
}
