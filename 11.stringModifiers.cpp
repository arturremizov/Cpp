#include <iostream>
#include <string>

int main() 
{
    std::string greeting = "hello";
    greeting += "there";
    greeting.append("!");
    greeting.insert(5, " ");
    greeting.erase(greeting.length() - 1, 1); // greeting.pop_back();

    greeting.replace(0, 1, "H");
    std::cout << greeting.size() << std::endl; // greeting.length()
    std::cout << greeting << std::endl;
}