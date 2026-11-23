#include <iostream>
#include <utility>

#include "numbers/numbers.h"

using namespace std;

void show(char const *label, Numbers const &nums)
{
    cout << label << " (" << nums.length() << "): ";
    nums.write(cout);
}

Numbers factory()
{
    Numbers ret{ 3, 5 };
    return ret;
}

void demoUninitialized()
{
    cout << "\n--- uninitialized ints ---\n";
    {
        Numbers filled{ 8, 1234 };              // fill a block with 1234
        show("filled", filled);
    }                                           // block is freed here

    Numbers raw{ 8 };                           // probably gets it back
    show("raw   ", raw);                        // old values show through
}

int main()
{
    Numbers empty;                              // default constructor
    show("empty", empty);

    Numbers nums{ 4, 7 };                       // count and value
    show("nums", nums);

    nums.at(1) = 42;                            // at: modify
    cout << "nums.at(1): " << nums.at(1) << '\n';
    show("nums", nums);

    cout << "nums.at(10): " << nums.at(10) << '\n';     // out of range

    Numbers const constNums{ 2, 3 };            // at on a const object
    cout << "constNums.at(0): " << constNums.at(0) << '\n';

    Numbers copy{ nums };                       // copy constructor
    copy.at(0) = 100;
    show("copy", copy);
    show("nums", nums);

    Numbers moved{ std::move(copy) };           // move constructor
    show("moved", moved);
    show("copy", copy);

    Numbers assigned{ 2, 1 };
    assigned = nums;                            // copy assignment
    assigned.at(3) = -1;
    show("assigned", assigned);
    show("nums", nums);

    assigned = assigned;                        // self-assignment
    show("assigned after a = a", assigned);

    Numbers target;
    target = std::move(moved);                  // move assignment
    show("target", target);
    show("moved", moved);

    target = factory();                         // move from a temporary
    show("target = factory()", target);

    Numbers a{ 2, 1 };
    Numbers b{ 3, 2 };
    a.swap(b);                                  // swap
    show("a after swap", a);
    show("b after swap", b);

    demoUninitialized();
}