#include <iostream>
#include <string>
int main ()
{
std::string name = "";
std::cout << "Enter your name" << std::endl;
std::cin >> name;
std::cout << "Hello world" + name << std::endl;
return 0;
}
