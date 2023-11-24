#include <iostream>

// using namespace std; //using directive
using std::cout;
using std::cin;

int main() 
{
    int slices;
    cout << "YO fatty how many pieces of pizza you eat?: ";
    cin >> slices;
    cout << "You have " << slices << " slices of pizza." << std::endl;
}