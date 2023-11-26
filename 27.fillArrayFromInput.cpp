#include <iostream>
#include <string>
#include <limits>

void print_array(int array[], int size)
{
    // std::cout << size << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
} 

int main() 
{
    const int SIZE = 10;
    int nums[SIZE];
    int count = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if(std::cin >> nums[i]) 
        {
            //input worked
            count++;
        }
        else 
        {
            //invalid character
            break;
        }
    }
    print_array(nums, count);
    std::cin.clear(); 
    // std::cin.ignore(10000, '\n');
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    std::string test;
    std::cin >> test;
    std::cout << test << "\n";
}
