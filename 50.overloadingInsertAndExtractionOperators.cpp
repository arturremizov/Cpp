#include <iostream>

class User
{
    public:
        std::string first_name;
        std::string last_name; 
};

std::ostream& operator << (std::ostream& output, const User user)
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name;
    return output;
}

std::istream& operator >> (std::istream& input, User &user) 
{
    input >> user.first_name >> user.last_name;
    return input;
}

int main() 
{  
    User user;
    std::cin >> user;
    // user.first_name = "Caleb";
    // user.last_name = "Curry";
    std::cout << user << std::endl;
}