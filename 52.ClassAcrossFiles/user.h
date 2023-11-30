#ifndef USER_H
#define USER_H

class User
{
    static int user_count;
    std::string status = "Gold";

    public:
        std::string first_name;
        std::string last_name;
        
        static int get_user_count();

        User();
        ~User();

        friend void output_status(User user);
        friend std::ostream& operator << (std::ostream& output, const User user);
        friend std::istream& operator >> (std::istream& input, User &user); 
};

#endif