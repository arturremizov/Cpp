#include <iostream>

class User
{
    static int user_count;

    public:
        std::string first_name;
        std::string last_name;

        static int get_user_count()
        {
            return user_count;
        }

        User()
        {
            user_count++;
        }
        ~User() 
        {
            user_count--;
        }
};

int User::user_count = 0;

int main() 
{  
    User user, user1, user2, user3, user4;
    std::cout << User::get_user_count() << std::endl;
    user.~User();
    std::cout << User::get_user_count() << std::endl;
}