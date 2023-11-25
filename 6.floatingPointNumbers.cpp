#include <iostream>
#include <float.h>

using std::cout;

int main() 
{
    float a = 10.0 / 3;
    a = a * 1000000000000;
    double b = 77000; // 7.7E4   7.7 x 10^4
    double bb = 7.7E4;
    long double c;

    cout << std::fixed << a << "\n";
    cout << FLT_DIG << std::endl;
    cout << DBL_DIG << std::endl;
    cout << LDBL_DIG << std::endl;
}