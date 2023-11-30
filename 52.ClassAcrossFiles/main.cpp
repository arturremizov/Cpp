#include <iostream>
#include "user.h"

int main() 
{  
    User user;
    std::cin >> user;

    output_status(user);
    std::cout << user << std::endl;
}