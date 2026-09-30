#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_


class Calculator
{
    Parser d_parser;

    public:
        Calculator();

        void run();

    private:

        void compute(double num1, double num2, std::string operator);
        void parseLine();

};
        
#endif
