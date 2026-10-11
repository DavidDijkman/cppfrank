#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <string>

class DataImp;

class Data
{
    DataImp *d_dataimpl; // pointer to implementation class of this class

    public:
        Data();

        bool read();
        void display() const; 
};
        
#endif
