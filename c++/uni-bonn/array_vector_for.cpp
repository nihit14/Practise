#include <iostream>
#include <array>
#include <vector>

int main()
{
	std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10} ;
	for (const auto& random : vec)
	{
		std::cout << random + 1 << " " << std::endl;
		
	}
	return 0;
}