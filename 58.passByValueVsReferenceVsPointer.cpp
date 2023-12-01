#include <iostream>
#include <vector>

void work(std::vector<int> &data) 
{
    for(int i = 0; i < data.size(); i++)
    {
        data[i]++;
    }
}

int main() 
{
    std::vector<int> data = {1, 2, 3, 4, 5};
    work(data);
    for (int x : data)
    {
        std::cout << x << " ";
    }
    return 0;
}