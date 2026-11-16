#ifndef INCLUDED_LOCK_
#define INCLUDED_LOCK_

#include <string>

class Lock
{
    int d_fileDescriptor = -1;
    
    
    public:
        Lock(std::string const &path);
        Lock(std::string const &path, std::string lockDir);
        ~Lock();

        bool valid() const;

    private:
        int open(std::string const &lockFile) const;
        static std::string lockPath(std::string const &path, 
                                    std::string const &lockDir);
        static std::string stringName(std::string const &path, 
                                      char *(*fun)(char *));

};

inline bool Lock::valid() const
{
    return d_fileDescriptor != -1;
}

#endif
