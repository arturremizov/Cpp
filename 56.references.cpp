#include <iostream>
#include <vector>

void work(int &x)
{
    x++;
}

void work(std::vector<int> &data)
{
    data[0] = 10000;
}

int main() 
{
    int a = 10;
    int &b = a;
    // int c = 100;

    std::cout << a << " " << b << std::endl;
    // b = c;
    work(a);
    std::cout << &a << " " << &b << std::endl;
    std::cout << a << " " << b << std::endl;


    std::vector<int> data = {10, 10, 30, 50, 40, 20, 430, 40, 2};
    std::cout << data[0] << std::endl;
    work(data);
    std::cout << data[0] << std::endl;
}