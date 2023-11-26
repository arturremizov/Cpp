#include <iostream>

int main() 
{
    int guesses[] = {10, 13, 54, 42, 12, 12, 13};
    // std::cout << guesses[3] << std::endl;
    // guesses[3] = 300;
    // std::cout << guesses[3] << std::endl;

    int size = sizeof(guesses) / sizeof(guesses[0]);
    for (int i = 0; i < size; i++)
    {
        std::cout << guesses[i] << "\t";
    }
    std::cout << std::endl;

    int nums[10] = {12, 42, 23, 42, 23};
    int num_elements = 5;
    for (int i = 0; i < num_elements; i++)
    {
        std::cout << nums[i] << "\t";
    }
    // int array[20];
    // array[0] = 10;
    // std::cin >> array[0];
    // std::cout << array[0] << std::endl;
}
