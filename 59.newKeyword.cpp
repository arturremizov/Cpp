#include <iostream>

class User 
{
    public:
        std::string name;
};

int main() 
{
    int *x = new int(5);
    std::cout << "The pointer " << x << " points to " << *x << std::endl;
    delete x;

    User *u = new User();
    u->name = "Caleb Curry";
    std::cout << u->name << std::endl;
    delete u;

    return 0;
}