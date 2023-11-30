#include <iostream>
#include <vector>

class User 
{
    public:
        std::string first_name;
        std::string last_name;
        User()
        {
            std::cout << "User created\n";
        }
};

class Teacher: public User 
{
    public:
        std::vector<std::string> classes_teaching;
        Teacher()
        {
            std::cout << "Teacher created\n";
        }
        void output()
        {
            std::cout << "output\n";
        }
};

int main() 
{
   Teacher teacher;
   teacher.first_name = "Teach";
   std::cout << teacher.first_name << std::endl;
   teacher.output();
}