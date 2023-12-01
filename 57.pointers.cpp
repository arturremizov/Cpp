#include <iostream>

void change(int *x) 
{
    *x = 10;
}

int main() 
{
    int x = 5;
    change(&x);
    std::cout << x << std::endl;

    int *y = &x;
    x = 6;

    int i = 10;
    y = &i;

    x = 5;
    *y = 60;

    std::cout << &x << " " << y << std::endl;
    std::cout << x << " " << *y << " " << i <<  std::endl;


    int *j = new int(5);
    change(j);
    std::cout << *j << std::endl;
    delete j;

    return 0;
}