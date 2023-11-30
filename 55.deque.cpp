#include <iostream>
#include <deque>

int main() 
{
    std::deque<std::string> foods = {"tacos", "honey", "apples", "grapes"};
    foods.push_front("lettuce");
    foods.push_back("chesse");

    for (std::string food : foods)
    {
        std::cout << food << std::endl;
    }
}