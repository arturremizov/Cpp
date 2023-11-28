#include <iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb: " << b << "\n";
}

void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}

struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width) 
{
    return length * width;
}

double area(double length) 
{
    return length * length;
}

double area(Rectangle rectangle) 
{
    return rectangle.length * rectangle.width;
}

int main() 
{
    int a = 10;
    int b = 20;

    swap(a, b);
    std::cout << "a: " << a << "\tb: " << b << "\n";

    std::string fist_name = "Caleb";
    std::string last_name = "Curry";
    swap(fist_name, last_name);
    std::cout << fist_name << " " << last_name << "\n";


    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;
    std::cout << area(rectangle.length, rectangle.width) << "\n";
    std::cout << area(rectangle.length) << "\n";
    std::cout << area(rectangle) << "\n";
}