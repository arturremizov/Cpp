#include <iostream>
#include <fstream>
#include <vector>

int main() 
{
    std::string filename;
    std::cin >> filename;

    std::ofstream file (filename, std::ios::app);
    // file.open("hello.txt");
    // file << "hey";
    if (file.is_open()) 
    {
        std::cout << "success n00b\n";
    }
    
    std::vector<std::string> names;
    names.push_back("Caleb");
    names.push_back("Amy");
    names.push_back("Susan");

    for (std::string name : names) 
    {
        file << name << std::endl;
    }

    file.close();
}