#include <iostream>

int main() 
{
    // std::vector<std::vector<int>> grades = {
    int grades[][3] = { 
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };

    for (int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            std::cout << grades[row][col] << "\t";
        }
        std::cout << "\n";
    }
}
