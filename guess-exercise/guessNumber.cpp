#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>


void print_guess(std::array<int, 251> array, int size)
{
	for(int i = 0; i < size; i++)
	{
		std::cout << array[i] << "\t";
	}
	std::cout << std::endl;
}

void play_game()
{
	std::array<int, 251> guesses;
	int guess_count = 			0;
	int random =			rand() % 251;

	std::cout << random << std::endl;
	std::cout << "Guess a number: ";
	while(true)
	{
		int guess;
		std::cin >> guess;

		guesses[guess_count++] = 	guess;

		if(guess = random)
		{
			std::cout << "You got it correct";
			break;
		}
		else if (guess < random)
		{
			std::cout << "Higher" << std::endl;
		}
		else
		{
			std::cout << "Lower" << std::endl;
		}
	}
	print_guess(guesses, guess_count);
}

int main ()
{
	int choice;
	
	do
	{
		std::cout << "0. Quit" << std::endl << "1. Play" << std::endl;
		std::cin >> choice;

		switch(choice)
		{
			case 0:
				std::cout << "Ending App";
				return 0;
			case 1:
			play_game();
			break;
		}
	}
	while(choice != 0);
	return 0;
}