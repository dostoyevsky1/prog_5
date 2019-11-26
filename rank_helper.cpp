#include <string.h>
#include <_ctype.h>
#include <iostream>

// Password Rating Function
int PWRating(char pw[])
{

    bool len_crit, upper_crit, lower_crit, digit_crit, special_crit;
    
    if(strlen(pw)>=8)
    {
        len_crit = true;
    } else
    {
        len_crit = false;
    }
    
    for(int i = 0; i < strlen(pw); i++)
    {
        if(isalpha(pw[i])&&islower(pw[i]))
        {
            lower_crit = true;
        } 
        else if(isalpha(pw[i])&&isupper(pw[i]))
        {
            upper_crit = true;
        }
        else if(isalnum(pw[i])&&!isalpha(pw[i]))
        {
            digit_crit = true;
        }
        else
        {
            special_crit = true;
        }
        
        
           
    }
    std::cout << len_crit << std::endl << upper_crit << std::endl << lower_crit << std::endl << digit_crit << std::endl << special_crit << std::endl;
    return len_crit+upper_crit+lower_crit+digit_crit+special_crit;

    


}