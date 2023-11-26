#include <iostream>
#include <array>

void print_array(std::array<int, 20> &data) 
{
    for(int i = 0; i < data.size(); i++) 
    {
        std::cout << data[i] << "\t";
    }
    std::cout << std::endl;
}

int main() 
{
    std::array<int, 20> data = {1, 2, 3};
    print_array(data);
}
