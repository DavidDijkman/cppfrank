#include "fch.ih"

void Fch::ask()
{
    showModification();
    
    char answer;
    answer = request(); // anything not "ynYN" gets treated as 'n'

    switch (answer)
    {
        case 'Y':
            d_action = CHANGE_ALL;
        case 'y':       // fallover into modify, still needs to modify current
            modify();
            break;
        case 'N':
            d_action = NO_CHANGES;
        default:
            break;
    }   
}