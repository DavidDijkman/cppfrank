#include "main.ih"

void show(Msg msg)
{
    char const *names[] = {
        "DEBUG", "INFO", "NOTICE", "WARNING",
        "ERR", "CRIT", "ALERT", "EMERG"
    };

    if (msg == Msg::NONE)
    {
        std::cout << "NONE\n";
        return;
    }

    size_t idx = 0;

        // loop over mask values and name index
    for (size_t mask = 1; mask < (1 << 8); mask *= 2, ++idx)
    {
        if (static_cast<int>(msg) & mask)
            cout << names[idx] << ' ';
    }

    cout << '\n';
}

int main()
{
    show(Msg::NONE);
    show(Msg::NONE | Msg::EMERG);
    show(Msg::ALERT | Msg::CRIT);
    show(Msg::ALL   & (Msg::ERR | Msg::WARNING));
    show(~Msg::NOTICE);
}