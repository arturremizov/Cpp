#include <iostream>

class User
{
    std::string status = "Gold";
    public:
        std::string first_name;
        std::string last_name;
        friend void output_status(User user);
        friend std::ostream& operator << (std::ostream& output, const User user);
        friend std::istream& operator >> (std::istream& input, User &user); 
};

void output_status(User user) 
{
    std::cout << user.status << std::endl;
}

std::ostream& operator << (std::ostream& output, const User user)
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name << "\nStatus: " << user.status;
    return output;
}

std::istream& operator >> (std::istream& input, User &user) 
{
    input >> user.first_name >> user.last_name >> user.status;
    return input;
}

int main() 
{  
    User user;
    // user.first_name = "Caleb";
    // user.last_name = "Curry";
    std::cin >> user;

    output_status(user);
    std::cout << user << std::endl;
}