#include <iostream>

int main() 
{
   int number = 30; //thirty
   std::cout << number << std::endl;
   std::cout << std::hex << number << std::endl;
   std::cout << std::oct << number << std::endl;
   
   int hex_number = 0x30; //fourty eight
   std::cout << hex_number << std::endl;

   int octal_number = 030; //twenty four
   std::cout << octal_number << std::endl;
}