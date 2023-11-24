#include <iostream>

// using namespace std; //using directive
using std::cout;

int main() 
{
    int slices;
    slices = 5 + 1;

    int children = slices;
    slices = 10000;
    cout << children;
}