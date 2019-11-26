#include <iostream>
#include "rank_helper.h"
#include <string.h>
#include <_ctype.h>

int main()
{
    char yes_no;
    int best = 0, good = 0, weak = 0, poor = 0, unaccept = 0;

    do
    {
        std::cout << std::endl << "Do you have a password to evaluate?(y/n)" << std::endl;
        std::cin >> yes_no;

        if(yes_no == 'Y' || yes_no == 'y')
        {
            
            char testpass[100];
            std::cout << "Enter Password: ";
            std::cin >> testpass;
            int rating = PWRating(testpass);
            std::cout << std::endl << "Password Rating: " << rating << std::endl;

            switch(rating)
            {
                case 5: 
                    best += 1;
                    continue;
                case 4:
                    good += 1;
                    continue;
                case 3:
                    weak += 1;
                    continue;
                case 2: 
                    poor += 1;
                    continue;
                case 1:
                    unaccept += 1;
                    continue;
            }

        } else if(yes_no == 'N' || yes_no == 'n')
        {
            break;
        }
        
    }while(yes_no != 'N' || yes_no != 'n');

    std::cout << std::endl <<
    "Best: " << best << std::endl <<
    "Good: " << good << std::endl <<
    "Weak: " << weak << std::endl <<
    "Poor: " << poor << std::endl <<
    "Unacceptable: " << unaccept << std::endl;

    return 0;
}