#include <iostream>
#include <cmath>

int main() 
{
    std::cout << sqrt(25) << std::endl;
    std::cout << sqrt(-25) << std::endl;
    std::cout << pow(9, 999) << std::endl;
    std::cout << pow(-9, 999) << std::endl;
    std::cout << NAN << std::endl;
    std::cout << INFINITY << std::endl;
    std::cout << remainder(10, 3) << std::endl;
    std::cout << 10 % 3 << std::endl;
    std::cout << fmod(10, 3.25) << std::endl;
    std::cout << fmax(10, 3.25) << std::endl;
    std::cout << fmin(10, 3.25) << std::endl;
    std::cout << ceil(3.25) << std::endl;
    std::cout << floor(3.25) << std::endl;

    std::cout << ceil(-1.5) << std::endl;
    std::cout << trunc(-1.5) << std::endl;
    std::cout << floor(-1.5) << std::endl;

    std::cout << round(-1.49) << std::endl;
}