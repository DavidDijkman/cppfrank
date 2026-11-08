#include "calculator.ih"

bool Calculator::ok()
{   
            // evaluated at end of full line to check if no errors
            // were encountered and the line is at its end
    return d_ok && atEoln();
}