// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;


int main()
{
	//task 1
	int iNumber, iGuess;

	int iAttempt = 5;

	srand(time(NULL));

	iNumber = rand() % 100 + 1;


	do {
		iAttempt--;
		cout << " Guess the number from 1 to 100: ";
		scanf_s("%d", &iGuess);
		if (iNumber < iGuess) puts("The number is lower");
		else if (iNumber > iGuess) puts("The number is higher");
		cout << "You have " << iAttempt << " attempts left" << endl << endl;
	} while (iGuess != iNumber || iAttempt > 0);

	cout << endl;

	if (iNumber == iGuess) puts("Congratulations, you guessed it!");
	else if (iNumber != iGuess) puts("Sorry, you did not guess it in 5!");

	cout << "Thank you for playing" << endl << endl;

	system("pause");
    return 0;
}

