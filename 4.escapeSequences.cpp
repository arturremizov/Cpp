#include <iostream>

using std::cout;

int main() 
{
    cout << "Hello\tThere" << std::endl;
    cout << "Hello\bThere" << std::endl;
    cout << "Hello\nThere" << std::endl;
    cout << "Hello\vThere" << std::endl;
    cout << "Hello\aThere" << std::endl;
    cout << "Hello There\0" << std::endl;
    cout << "\"Hello 'There'\"" << std::endl;
    char single_quote = '\'';
    cout << "\\" << std::endl;
}