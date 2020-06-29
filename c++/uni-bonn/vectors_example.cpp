#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<int> vec;
	for (int i = 1; i < 16; ++i)
	{
		vec.emplace_back(i);
	}
	std::cout << vec.size() + 1  << std::endl;
	return 0;

}
