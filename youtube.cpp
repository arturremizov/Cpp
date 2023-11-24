#include <iostream>
#include <cmath>

// using namespace std; //using directive
using std::cout;
using std::cin;

int main() 
{
    int base, exponent;
    cout << "What is the base? ";
    cin >> base;
    cout << "What is the exponent? ";
    cin >> exponent;

    double power = pow(base, exponent);
    cout << power << std::endl;
}