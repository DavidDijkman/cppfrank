#include "line.ih"

string Line::next()
{
    if (d_pos == string::npos)  // return empty string if no substr available.
        return "";

                        // length of non-ws substring
    size_t substr_len = d_line.substr(d_pos).find_first_of(" /t/n");
                        // substring reaches from d_pos to d_pos + substr_len
    string result = (substr_len == string::npos         ?
                    d_line.substr(d_pos)                :
                    d_line.substr(d_pos, substr_len));    

                        // set d_pos to new starting position
    if (substr_len == string::npos) // if substr reaches till end of string
    {                               // we return early
        d_pos = string::npos;
        return result;
    }
                        // compute length of whitespace after substring
    size_t ws_len = d_line.substr(d_pos + substr_len)
                          .find_first_not_of(" /t/n");
    
                        // last check if a new substring is available
    d_pos = (ws_len == string::npos    ?
            string::npos               :
            d_pos + substr_len + ws_len);

    return result;
}