#include "data.ih"

void (Data::*Data::s_swap[][3])(Data&) =
{
    // Other: DOUBLE WORD VALUE
    { &Data::swapDoubleDouble,
      &Data::swapDoubleWord,
      &Data::swapDoubleValue },

    { &Data::swapWordDouble,
      &Data::swapWordWord,
      &Data::swapWordValue },

    { &Data::swapValueDouble,
      &Data::swapValueWord,
      &Data::swapValueValue }
};