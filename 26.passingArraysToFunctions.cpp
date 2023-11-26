#include <iostream>

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
    int nums[] = {12, 43, 23, 43, 23};
    int size = sizeof(nums) / sizeof(int);
    print_array(nums, size);
}
