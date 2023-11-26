#include <iostream>
#include <string>

int main() 
{
    std::string sentence = "Hello my name is Caleb";
    for (int i = 0; i < sentence.size(); i ++)
    {
        if (sentence[i] == ' ')
        {
            continue;
        }
        std::cout << sentence[i] << std::endl;
        if (sentence[i] == 'a') 
        {
            std::cout << "Found a!\n";
            break;
        }
    }
    std::cout << "Done!\n";
}
