#include <iostream>

int main() 
{
    double x = 10. / 4;
    std::cout << x << std::endl;

    double reminder = 10 % 4;
    std::cout << reminder << std::endl;

    double a;
    double b;
    a = 10;
    b = (a = 100);

    std::cout << a << "\t" << b << std::endl;

}