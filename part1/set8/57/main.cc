#include <iostream>
#include <utility>

#include "strings/strings.h"

using namespace std;

void show(char const *label, Strings const &strings)
{
    cout << label << " (" << strings.size() << " lines):\n";
    for (size_t idx = 0, end = strings.size(); idx != end; ++idx)
        cout << "    " << idx + 1 << ": " << strings.at(idx) << '\n';
}

int main()
{
    Strings orig{ cin };
    show("orig", orig);

    Strings copy{ orig };                       // copy constructor
    copy.add("added to copy");
    show("copy", copy);
    show("orig (unchanged?)", orig);

    Strings moved{ std::move(copy) };           // move constructor
    show("moved", moved);
    show("copy (empty?)", copy);

    Strings assigned;
    assigned = orig;                            // copy assignment
    assigned.add("added to assigned");
    show("assigned", assigned);
    show("orig (unchanged?)", orig);

    assigned = assigned;                        // self-assignment
    show("assigned after a = a", assigned);

    Strings target;
    target = std::move(moved);                  // move assignment
    show("target", target);
    show("moved (empty?)", moved);
}