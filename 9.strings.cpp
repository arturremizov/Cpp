#include <iostream>
#include <string>

int main() 
{
    std::string empty_string; // ""
    std::cout << empty_string << std::endl;

    std::string greeting = "Hello";
    std::string complete_greeting = greeting + " there";
    complete_greeting += "!";
    std::cout << complete_greeting << std::endl;
    std::cout << complete_greeting.length() << std::endl;   

    char name[] = "Caleb"; //c string == array of characters "Caleb\0"  
}

//-Wl,-ld_classic