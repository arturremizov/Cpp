#include <iostream>
#include <string>

int main() 
{
    int answer = 11;
    std::cout << "Guess the number: ";
    int guess;
    std::cin >> guess;
    guess == answer ? std::cout << "Good job\n" << std::endl : std::cout << "Bad job\n" << std::endl;  
}
