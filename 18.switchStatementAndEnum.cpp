#include <iostream>

int main() 
{
    // enum season { summer, spring, fall, winter };
    enum class Season { summer, spring, fall, winter };
    Season now = Season::winter;

    switch (now)
    {
        case Season::summer:
            break;
        case Season::spring:
            break;
        case Season::fall:
            break;
        case Season::winter:
            std::cout << "Stay warm!\n";
            break;
    }
}