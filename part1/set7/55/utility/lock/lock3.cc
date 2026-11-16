#include "lock.ih"

Lock::~Lock()
{
    if (d_fileDescriptor != -1)
        ::close(d_fileDescriptor);
}
