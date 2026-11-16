#include "fch.ih"

void Fch::process()
{
    d_pos = 0;
    while (findTarget()) // iterate over all targets
    {
        switch (d_action)
        {
            case CHANGE_ALL:    // modify all
                modify();
                break;
            case ASK:           // check first
                ask();
                break;
            case NO_CHANGES:    // don't do anything
            default:
                break;
        }
    }

}