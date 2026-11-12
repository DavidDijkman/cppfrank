#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string lowercase(string &str)
{
    string lower;
    for (char ch : str)
        lower += tolower(ch); // transitive include

    return lower;
}

void convert(string filename)
{
    fstream file{ filename };

    string line;
    size_t pos;

    while (getline(file, line))
    {
        pos = line.find("email:");

        if (pos != string::npos)
        {
            string lower = lowercase(line);

                                        // go back to start of line
            file.seekp(-line.length() - 1, ios::cur); 
            file << lower << '\n';
            file.seekg(0, ios::cur);
        }
    }
}

int main(int argc, char* argv[])
{
    if (argc < 2)
        return 1;

    convert(argv[1]);
}
