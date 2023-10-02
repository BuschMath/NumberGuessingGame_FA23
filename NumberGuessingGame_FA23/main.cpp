#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	cout << "Welcome to the Number Guessing Game!" << endl;
	cout << "I'm thinking of a number between 1 and 10..." << endl;
	cout << "Can you guess what it is?" << endl;

	srand(time(NULL));
	int number = rand() % 10 + 1;
	int guess;
	cin >> guess;

	if (guess == number)
	{
		cout << "You guessed correctly!" << endl;
	}
	else
	{
		cout << "You guessed incorrectly! Try again." << endl;
		cin >> guess;
		if (guess == number)
		{
			cout << "You guessed correctly!" << endl;
		}
		else
		{
			cout << "You guessed incorrectly! Try again." << endl;
			cin >> guess;
			if (guess == number)
			{
				cout << "You guessed correctly!" << endl;
			}
			else
				cout << "You guessed incorrectly! The number was: " << number << endl;
		}

	}

	return 0;
}