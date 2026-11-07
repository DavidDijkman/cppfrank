#include "charcount.ih"

CharCount::ActionPtr const CharCount::s_action[] =
{
    &CharCount::inc,        // INC
    &CharCount::insert,     // INSERT
    &CharCount::append      // APPEND
};