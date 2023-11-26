#include <iostream>

int main() 
{
    int data[] = {1, 2, 3, 4, 5, 6};

    for(int num : data) 
    {
        std::cout << num << "\t";
    }
    
    std::cout << "\n";
}