#ifndef INCLUDED_VOLUME_
#define INCLUDED_VOLUME_

#include <string>

using namespace std;

class Volume
{
    // Private data members
    string d_shape = "box"          
    size_t d_length = 0;
    size_t d_width = 0;
    size_t d_height = 0;

    public:
        // Constructors 
        Volume();               
        Volume(size_t length, size_t width, size_t height);

        // Public interface
        size_t box() const;

        size_t length() const;
        size_t width() const;
        size_t height() const;

    private:
};
        
#endif
