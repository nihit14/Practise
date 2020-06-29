#include <iostream>
#include <string>

int main()
{
	std::string greet = "Hello ";
	std::cout << "Enter your name: " ;
	std::string name;
	std::cin >> name;
	std::cout << greet + name << std::endl;
	return 0;
}