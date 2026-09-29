#include <iostream>

#include "main.ih"

void usage(string const &programName)
{
    cout << "Usage: " << programName << " mode\n"
        "Where:\n\tmode - one of three modes:\n"
        "\t-c \t- character count\n"
        "\t-w \t- word count\n"
        "\t-l \t- line count\n";
}