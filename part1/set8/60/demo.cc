#include <iostream>
#include <utility>

using namespace std;

class Demo
{
    public:
        Demo()                      {cout << "Default Constructor" << '\n';};
        ~Demo()                     {cout << "Destructor" << '\n';};
        Demo(Demo const &other)     {cout << "Copy Constructor" << '\n';};
        Demo(Demo &&tmp)            {cout << "Move Constructor" << '\n';};
        Demo &operator=(Demo const &other)  
        {
            cout << "Copy Assignment" << '\n';
            return *this;
        };   
        Demo &operator=(Demo &&tmp)         
        {
            cout << "Move Assignment" << '\n';
            return *this;
        };          

};

Demo Factory()
{
    return Demo{};
}

int main()
{
    cout << "- Demo of copy ellision:" << '\n';
    Demo demo1{Factory()};

    cout << "- Demo of move constructor:" << '\n';
    Demo demo2{move(demo1)};

    cout << "- Demo of copy assignment:" << '\n';
    demo2 = demo1;

    cout << "- Demo of move assignment:" << '\n';
    demo2 = Factory();
}