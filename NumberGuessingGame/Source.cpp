#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() 
{
	// System generates a random number.
	srand((unsigned)time(0));
	int number;
	number = (rand() % 800);
	cout << number << "\n";
	// Computer guess a random number and user tries to guess that random number.
	//char input = guess a number 1-800.
	int input;
	cout << "Guess a number 1-800! Input your answer" << endl;
	cin >> input;
	while (number != input)
	{
		if (number < input)
		{
			cout << "Your number is less than the seccret number" << endl;
		}
		else if (number > input)
		{
			cout << "Your number is greater than the secret number" << endl;
		}
	}
	cout << "You guessed thr right number!" << endl;

	system("pause");
}