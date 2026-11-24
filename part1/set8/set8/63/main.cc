#include "main.ih"

int main(int argc, char **argv)
{
    Wrap w1{ 42 };
    cout << "Value: " << w1.value() << '\n';

    Wrap w2{ "hello world" };
    cout << "w2 value (pointless): " << w2.value() << '\n';

    cout << "w2 word:: " << w2.word() << '\n';

    w1 = w2;

    cout << "w1 word: " << w1.word() << "\n";

    double *dValues = new double[10] { 1,    2.3,  4,   5.6,   7, 
                            8.9, 10,   12.3, 3.14, 42 }; 
    Wrap w3{ dValues };

    Wrap w4{ move(w1) };    // BS, but just to force using the MC.
                            // the MC initializes m4 to VALUE 0.

    cout << "w4 word: " << w4.word() << "\n"
            "w1 value: " << w1.value() << '\n';
}
