#include <iostream>
#include <vector>

class User
{
    std::string status = "Gold";

    public:
        std::string first_name;
        std::string last_name;

        std::string get_status() 
        {
            return status;
        }
        // Constructors
        User()
        {
            std::cout << "Constructor\n";
        }

        User(std::string first_name, std::string last_name, std::string status)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }
        // Destructors
        ~User()
        {
            std::cout << "Destructor\n";
        }
};

int main() 
{  
    User user("Caleb", "Curry", "Silver");
    std::cout << user.get_status() << std::endl;
}