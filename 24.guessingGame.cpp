#include <iostream>

int main() 
{
    int choice;
    do 
    {
        std::cout << "0. Quit" << std::endl << "1. Play Game\n"; 
        std::cin >> choice;

        switch (choice)
        {
            case 0:
                std::cout << "Thanks for nothing\n";
                return 0;
            case 1:
              std::cout << "Yo let's play\n";
                break;
        } 
    }
    while (choice != 0);
}
