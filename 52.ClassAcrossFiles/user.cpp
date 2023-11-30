#include <iostream>
#include "user.h"

int User::get_user_count()
{
    return user_count;
}

User::User()
{
    user_count++;
}
User::~User() 
{
    user_count--;
}

void output_status(User user);
std::ostream& operator << (std::ostream& output, const User user);
std::istream& operator >> (std::istream& input, User &user); 

int User::user_count = 0;

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
