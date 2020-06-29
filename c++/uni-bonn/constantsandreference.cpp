#include <iostream>

int main()
{
	int num = 5 ;
	/*num = 6;*/
	/*The above line of code will throw an error as it is trying to change the constant value, You can check by uncommenting the line */
	//int & rnum = num;
	const int & krnum = num;
	num = 6;
	std::cout << num <<" " <<" " << krnum <<std::endl;
	num = 42;
	//std::cout << num <<" " << rnum << " " << krnum <<std::endl;
	return 0;
}