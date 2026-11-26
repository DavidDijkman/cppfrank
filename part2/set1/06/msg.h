#ifndef INCLUDED_MSG_H_
#define INCLUDED_MSG_H_

enum class Msg
{
    NONE    = 0,            // 00000000
    DEBUG   = 1 << 0,       // 00000001
    INFO    = 1 << 1,       // 00000010
    NOTICE  = 1 << 2,       // 00000100
    WARNING = 1 << 3,       // 00001000
    ERR     = 1 << 4,       // 00010000
    CRIT    = 1 << 5,       // 00100000
    ALERT   = 1 << 6,       // 01000000
    EMERG   = 1 << 7,       // 10000000
    ALL     = (1 << 8) - 1  // 11111111
};


// Bitwise OR
constexpr Msg operator|(Msg lhs, Msg rhs)
{
    return static_cast<Msg>(
        static_cast<int>(lhs) | static_cast<int>(rhs)
    );
}

// Bitwise AND
constexpr Msg operator&(Msg lhs, Msg rhs)
{
    return static_cast<Msg>(
        static_cast<int>(lhs) & static_cast<int>(rhs)
    );
}

// Bitwise XOR
constexpr Msg operator^(Msg lhs, Msg rhs)
{
    return static_cast<Msg>(
        static_cast<int>(lhs) ^ static_cast<int>(rhs)
    );
}

// Bitwise NOT
constexpr Msg operator~(Msg value)
{
    return static_cast<Msg>(~static_cast<int>(value) & 
                            static_cast<int>(Msg::ALL));
}

// Equality
constexpr bool operator==(Msg lhs, Msg rhs)
{
    return static_cast<int>(lhs) == static_cast<int>(rhs);
}

// Inequality
constexpr bool operator!=(Msg lhs, Msg rhs)
{
    return !(lhs == rhs);
}

// Logical NOT
constexpr bool operator!(Msg value)
{
    return value == Msg::NONE;
}

#endif