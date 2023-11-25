#include <iostream>
#include <string>

int main() 
{
    std::string greeting = "What the hell?";
    greeting.replace(greeting.find("hell"), 4, "****");
    std::cout << greeting << std::endl;

    std::string greeting2 = "What is up?";
    std::cout << greeting2.substr(5, 2) << std::endl;
    std::cout << greeting2.find_first_of("aeiou") << std::endl;
    std::cout << greeting2.find_first_of("!") << std::endl; //npos == -1 (unsigned long)

    if (greeting2.find_first_of("!") == -1) std::cout << "NOT FOUND!" << std::endl;

    if (greeting2 == "What is up?") std::cout << "Equals" << std::endl; // greeting2.compare("What is up?")
}