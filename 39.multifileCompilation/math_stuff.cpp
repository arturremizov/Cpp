#include <iostream>
#include "math_utils.h"

int main() 
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;
    std::cout << utils::area(rectangle.length, rectangle.width) << "\n";
    std::cout << utils::area(rectangle.length) << "\n";
    std::cout << utils::area(rectangle) << "\n";

    std::cout << utils::pow(3, 3) << std::endl;
    std::cout << utils::pow(3) << std::endl;
}

// g++ math_stuff.cpp math_utils.cpp
// g++ -c math_stuff.cpp math_utils.cpp
// g++ math_stuff.o  math_utils.o 