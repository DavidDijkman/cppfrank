#include "numbers.ih"

void Numbers::swap(Numbers &other)
{
    char bytes[sizeof(Numbers)];                // Create temporary buffer

                                    // Copy this object to temporary buffer
    memcpy(bytes, static_cast<void *>(this), sizeof(Numbers));
    memcpy(static_cast<void *>(this), &other, sizeof(Numbers));
    memcpy(static_cast<void *>(&other), bytes, sizeof(Numbers));
}