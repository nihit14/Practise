#include <iostream>
#include <array>
#include <string>
int main()
{
	std::array<int, 3> roll_number = {1,2,3};
	std::array<std::string, 3> names = {"Nihit","Nina","Nihina"};
	std::cout << "Array size: " << roll_number.size() <<std::endl;
	for (int i = 0; i < roll_number.size(); ++i)
	{
		std::cout <<"Roll number "<< roll_number[i];
		std::cout << " has name " + names[i] << std::endl;

	}

	return 0;
}