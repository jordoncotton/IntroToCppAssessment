#include <iostream>

int nums[10];

int checkwin(char square[][3])
{
	square[0];
	if (square[0][0] == square[0][1] && square[0][1] == square[0][2])

		return 1;
	else if (square[1][0] == square[1][1] && square[1][1] == square[1][2])

		return 1;
	else if (square[2][0] == square[2][1] && square[2][1] == square[2][2])

		return 1;
	else if (square[0][0] == square[1][0] && square[1][0] == square[2][0])

		return 1;
	else if (square[0][1] == square[1][1] && square[1][1] == square[2][1])

		return 1;
	else if (square[0][2] == square[1][2] && square[1][2] == square[2][2])

		return 1;
	else if (square[0][0] == square[1][1] && square[1][1] == square[2][2])

		return 1;
	else if (square[0][2] == square[1][1] && square[1][1] == square[2][0])

		return 1;
	else if (square[0][0] == square[1][1] && square[2][2] == square[0][0])

		return 1;
	else if (square[2][0] == square[1][1] && square[0][2] == square[2][0])
		return 1;

	else if (square[0][0] != '1' && square[0][1] != '2' && square[0][2] != '3'
		&& square[1][0] != '4' && square[1][1] != '5' && square[1][2] != '6'
		&& square[2][0] != '7' && square[2][1] != '8' && square[2][2] != '9')
		return 0;

	else
		return -1;
}

void board(char square[][3])
{
	system("cls");
	std::cout << "\n\n\tTic Tac Toe\n\n";

	std::cout << "Player 1 (X)  -  Player 2 (O)" << std::endl << std::endl;
	std::cout << std::endl;

	std::cout << "     |     |     " << std::endl;
	std::cout << "  " << square[0][0] << "  |  " << square[0][1] << "  |  " << square[0][2] << std::endl;

	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << "  " << square[1][0] << "  |  " << square[1][1] << "  |  " << square[1][2] << std::endl;

	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << "  " << square[2][0] << "  |  " << square[2][1] << "  |  " << square[2][2] << std::endl;

	std::cout << "     |     |     " << std::endl << std::endl;
}
/*Function to draw board of Tic Tac Toe with players mark*/
int main()
{
	char square[3][3] = { { '1','2','3'},
						  {'4','5','6'}, 
						  {'7','8','9'} };

	char player = 'X'; 
	int i = -1;
	int choice;

	do
	{
		
		board(square);

		std::cout << "Player " << player << ", enter a number:  ";
		std::cin >> choice;

		if (choice == 1 && square[0][0] == '1')
		{
			square[0][0] = player;
			if (player == 'X')
			{
				
				player = 'O';
			}
			else if (player == 'O')
			{
				player = 'X';
			}
		}
		else if (choice == 2 && square[0][1] == '2')
		{
			square[0][1] = player;
			if (player == 'X')
			{

				player = 'O';
			}
			else if (player == 'O')
			{
				player = 'X';
			}
		}
		else if (choice == 3 && square[0][2] == '3')
		{
			square[0][2] = player;
			if (player == 'X')
			{

				player = 'O';
			}
			else if (player == 'O')
			{
				player = 'X';
			}
		}
		else if (choice == 4 && square[1][0] == '4')
		{
			square[1][0] = player;
			if (player == 'X')
			{

				player = 'O';
			}
			else if (player == 'O')
			{
				player = 'X';
			}
			
		}
		else if (choice == 5 && square[1][1] == '5')
		{
			square[1][1] = player;
			if (player == 'X')
			{

				player = 'O';
			}
			else if (player == 'O')
			{
				player = 'X';
			}
		}
		else if (choice == 6 && square[1][2] == '6')
		{
			square[1][2] = player;
			if (player == 'X')
			{

				player = 'O';
			}
			else if (player == 'O')
			{
				player = 'X';
			}
		}
		else if (choice == 7 && square[2][0] == '7')
		{
			square[2][0] = player;
			if (player == 'X')
			{

				player = 'O';
			}
			else if (player == 'O')
			{
				player = 'X';
			}
		}
		else if (choice == 8 && square[2][1] == '8')
		{
			square[2][1] = player;
			if (player == 'X')
			{

				player = 'O';
			}
			else if (player == 'O')
			{
				player = 'X';
			}
		}
		else if (choice == 9 && square[2][2] == '9')
		{
			square[2][2] = player;
			if (player == 'X')
			{

				player = 'O';
			}
			else if (player == 'O')
			{
				player = 'X';
			}
		}
		else
		{
			std::cout << "Invalid move ";
			continue;
		}
		i = checkwin(square);
	}while (i == -1);
		board(square);
		if (i == 1)
		{
			std::cout << "You won piece of shit!";
		}
		system("pause");
}