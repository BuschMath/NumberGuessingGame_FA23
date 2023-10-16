#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	bool runAgain = true;
	srand(time(NULL));

	while(runAgain)
	{
		cout << "Welcome to the Number Guessing Game!" << endl;
		cout << "I'm thinking of a number between 1 and 10..." << endl;
		cout << "How many guesses would you like?" << endl;

		int guesses = 3;
		cin >> guesses;

		cout << "Can you guess what the number is?" << endl;

		int number = rand() % 10 + 1;
		int guess;
		cin >> guess;

		while (guesses > 0)
		{
			if (guess == number)
			{
				cout << "You guessed correctly!" << endl;
				break;
			}
			else
			{
				cout << "You guessed incorrectly!" << endl;
				cout << "You have " << guesses - 1 << " guesses left." << endl;
				cin >> guess;
				guesses--;
			}
		}

		if (guesses == 0)
		{
			cout << "You ran out of guesses!" << endl;
			cout << "The number was " << number << "." << endl;
		}

		cout << "Would you like to play again? (y/n)" << endl;
		char playAgain;
		cin >> playAgain;

		if (playAgain == 'y')
		{
			runAgain = true;
		}
		else
		{
			runAgain = false;
		}
	}

	return 0;
}