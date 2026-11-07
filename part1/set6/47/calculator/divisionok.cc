#include "calculator.ih"

bool Calculator::divisionOK(bool zeroRhs)
{
    if (zeroRhs)
    {
        cout << "division by zero\n";
        d_ok = false;
        return false;
    }

    return true;
}