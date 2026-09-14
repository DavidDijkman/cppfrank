#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string number = argv[1];

    size_t sum = ~0UL;

    while (sum >= 10) 
    {
        sum = 0;
        for (size_t index = 0; index < number.length(); index++)
        {
            sum += number[index] - '0';
        }
        number = to_string(sum);
    }
    
    if (sum % 3 == 0)
        cout << "Divisible by 3" << endl;
    else
        cout << "Not divisible by 3" << endl;
}