#include <new>
#include <string>

using namespace std;

void demo3()
{
                    // operator new : allocate memory for arbitrary size of
                    // memory. optionally cast to desired pointer type.
    string *memory = static_cast<string *>(operator new(10 * sizeof(string)));
                    
                    // placement new : constructs in previously allocated 
                    // memory.
    string *ptr = new(memory + 3) string{"Hello World!"};
    ptr->~string(); // destructor has to be called.

                    // operator delete : de-allocate previously allocated
                    // memory
    operator delete(memory);
}