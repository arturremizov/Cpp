#include <iostream>
#include <string>

int main() 
{
    std::string password = "hellotacos123";
    std::string guess;
    do 
    {
        std::cout << "Guess the password: ";
        std::cin >> guess;
    } while (guess != password);
}
