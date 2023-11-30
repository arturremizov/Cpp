#include <iostream>
#include <vector>

class User 
{
    public:
        std::string first_name;
        std::string last_name;
        virtual void output() //'virtual' enables polymorphism
        {
            std::cout << "I am a user\n";
        }
};

class Teacher: public User 
{
    public:
        std::vector<std::string> classes_teaching;
        void output()
        {
            std::cout << "I am a teacher\n";
        }
};

class Student: public User 
{
    public:
        void output()
        {
            std::cout << "I am a student\n";
        }
};

void do_something(User &user)
{
    user.output();
}

int main() 
{
    Teacher teacher;
    Student student;
    User& u1 = teacher;
    User& u2 = student;
    // u1.output();
    // u2.output();
    do_something(u1);
    do_something(u2);
}