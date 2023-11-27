#include <iostream>
#include <fstream>
#include <vector>

int main() 
{
    std::ifstream file ("tacos.txt");

    if (file.is_open())
    {
        std::cout << "It worked!\n";
    }

    // std::vector<std::string> names;
    // std::string input;
    // while (file >> input) //return file
    // {
    //     names.push_back(input);
    // }

    // for(std::string name : names)
    // {
    //     std::cout << name << std::endl;
    // }

    // char temp = file.get();
    // std::cout << temp << std::endl;

    std::string line;
    getline(file , line);
    std::cout << line << "\n";
}