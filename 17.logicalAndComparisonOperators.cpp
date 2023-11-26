#include <iostream>
#include <string>

int main() 
{
    std::string name_answer = "Caleb";
    int age_answer = 63;

    std::string name_guess;
    std::cout << "Guess my name: ";
    std::cin >> name_guess;

    int age_guess;
    std::cout << "Guess my age: ";
    std::cin >> age_guess;

    if (name_guess == name_answer && age_guess == age_answer) 
    {
        std::cout << "You got it right!\n";
    } 

    /*
    logical: && || !
    comparison: == !=    < >   <= >=
    */
    
    return 0;
}