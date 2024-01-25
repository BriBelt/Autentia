#include "checker.hpp"

//Function checks number of players must be less or equal than 4
bool    check_num_players(int   num_players)
{
    if (!isdigit(num_players))
        return (false);
    if (num_players < 4)
        return (false);
    return (true);
}

//Function Verify if the string is printable and less than 10 characters
bool    check_name_players(std::string &name)
{
    if (name.size() > 10)
        return (false);
    for (size_t i = 0; i < name.size(); i++)
    {
        if (!isprint(name[i]))
            return (false);
        i++;    
    }
    return (true);
}

//Function check if the round has a correct score (a + b <= 10)
bool    check_correct_round(int a, int b)
{
    if ((a + b > 10) && (a >= 0 && b >= 0))
        return (false);
    return (true);
}

//Function check if the shoot has a correct score (a >= 0 && a <= 10)
bool    check_correct_shoot(int a)
{
    if (!isnumber(a) && (a < 0 && a > 10))
        return (false);
    return (true);
}

