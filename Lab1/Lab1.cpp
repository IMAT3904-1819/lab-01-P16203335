// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
int main()
{
	cout << "Let's play a little game! >:D" << endl;
	srand(time(NULL));
	int random = rand() % 100 + 1;
	cout << "Try and guess what number I'm thinking of! \nI'll tell you if it's higher or lower :)" << endl;
	int tries = 0;
	bool win = false;
	while (tries != 5)
	{

		int guess;
		for (;;)
		{
			cout << "What's your guess?" << endl;
			if (cin >> guess)
			{
				break;
			}
			else
			{
				cout << "you a cunty boi" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}
		if (guess < random)
		{
			cout << "Not even close! Too small" << endl;
			tries++;
		}
		else if (guess > random)
		{
			cout << "Are you even trying? Too big" << endl;
			tries++;
		}
		else
		{
			cout << "Well smack my balls and plunger my nipples, you got it right!" << endl;
			win = true;
			tries = 5;
		}
	}
	if (win)
	{
		cout << "Well done! You did it... cheater... \nWanna try again and get STOMPED?" << endl;
	}
	else
	{
		cout << "Haha loser! If you only you were better at just guessing random number! Ha idiot...\nSo do you want your arse handed to you AGAIN?" << endl;
	}
	system("pause");
	return 0;
}

