#include <filesystem>

using namespace std;

int main(int argc, char **argv)
{                                        
    // Copy the file, determine filetime of the copy, and adjust it in copy
    filesystem::copy_file(argv[1], argv[2]);          
    auto filetime = filesystem::last_write_time(argv[1]);  
    filesystem::last_write_time(argv[2], filetime);
}