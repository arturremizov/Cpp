#include <iostream>

void printData(int size, const char **data)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << std::endl;
    }
}

void modifyData(int **data)
{
    // *data = 10;
    int *temp = new int(10);
    delete *data;
    *data = temp;
    std::cout << **data << std::endl;
}

int main(int argc, char **argv) 
{
    // for (int i = 1; i < argc; i++)
    // {
    //     std::cout << argv[i] << std::endl;
    // }

    const char *data[] = {"Hello my name is Caleb", "Hello your name is Subscriber"};
    printData(2, data);
    // std::cout << sizeof(data) << std::endl;

    int *num = new int(5);
    modifyData(&num);
    std::cout << *num << std::endl;
}