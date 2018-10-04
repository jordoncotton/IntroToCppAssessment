#include <iostream>
#include <ctime>
#include <cstdlib>
	
int main() 
{
	// System generates a random number.
	srand(time(0));
	int number;
	number = rand() % 20 + 1;
	// Computer guess a random number and user tries to guess that random number.
	//char input = guess a number 1-20.
	int input;
	std::cout << "Guess a number 1-20! Input your answer" << std::endl;

	do 
	{
		std::cin >> input;

		if (input < number)
		{
			std::cout << "Your estimate is less, than the secret number" << std::endl;
		}
		else if (input > number)
		{ 
			std::cout << "Your estimate is more, than the secret number" << std::endl;
		}
		else
		{
			std::cout << "Your guess is right!" << std::endl;
		}
	} while (input != number);

	system("PAUSE");

	return 0;
}

