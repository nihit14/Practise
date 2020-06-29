#include <cstdlib>
#include <iostream>
#include <experimental/random>
#include <string>
int main()
{

	
	int random = std::experimental::randint(0, 99);
	//std::cout << random << std::endl;
	std::cout << "Welcome to the guessing game!" << std::endl;
	std::cout << "Please enter your first name: " <<std::endl;
	std::string name ;
	std::cin >> name;
	std::cout << "In order to win, guess a number between 0 and 99. Try to guess within a minimum number of guesses. " << std::endl;
	std::cout << "Let's start!" << std::endl;
	std::cout << "Type your guessed number: ";
	int guess_number; 
	std::cin >> guess_number; 
	int i = 1;
	while (random != guess_number)
	{
		if (random < guess_number)
		{
			std::cout << "Try again but smaller number!" <<std::endl; 	
		}
		else
		{
			std::cout << "Try again but larger number!" <<std::endl; 		
		}

		std::cout << "Type your guessed number: "; 
		std::cin >> guess_number; 
		++i;
	}
	if (i > 1)
		{
			std::cout << "Congratulations "<< name<< ", you sucessfully guessed the number in " << i << " guesses." << std::endl; 	
		}
	else
	{

		std::cout << "Congratulations "<< name<< ",you sucessfully guessed the number on first guess. " << std::endl; 	
	}		

	std::cout << "Random number " << random << " and guessed number: "<< guess_number << std::endl;
	return 0;
}