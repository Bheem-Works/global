#include <iostream>

int main()
{
    // simple if-statement with an else clause
    int i = 2;
    if (i > 2)
        std::cout << i << " is greater than 2\n";
    else
        std::cout << i << " is not greater than 2\n";
 
    // nested if-statement
    int j = 1;
    if (i > 1)
        if (j > 2)
            std::cout << i << " > 1 and " << j << " > 2\n";
        else // this else is part of if (j > 2), not of if (i > 1)
            std::cout << i << " > 1 and " << j << " <= 2\n";

    int a = 1; 
    if(a > 0) 
    std::cout << "vim is going to shot with the aming.(haha) \n";
    else 
    std::cout << i << "vim doesn't love aming and don't going to shot witht the aming.(hahah)\n";

}
