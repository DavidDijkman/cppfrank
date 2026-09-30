#ifndef INCLUDED_PARSER_
#define INCLUDED_PARSER_


class Parser
{
    Line d_line;
    bool d_integral;

    public:
        Parser();

        enum Return 
        {
            NO_NUMBER,
            NUMBER,
            EOLN
        };

            // it fills d_line with the next input line, returning true if such a line was read;
        bool reset();
            // returns the value stored in the next substring of the d_line
        Return number(double *dest);

        bool isIntegral();
        
        std::string next();

    private:
            // safely converts string to double
        Return convert(double *dest, std::string const &str);
            // converts string to double, throws on conversion failure
        bool pureDouble(double *dest, std::string const &str);
};
        
#endif
