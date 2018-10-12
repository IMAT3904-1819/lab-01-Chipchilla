// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;


int main()
{
	//task 1
	int iNumber, iGuess;
	bool bDone = false;

	srand(time(NULL));

	iNumber = rand() % 100 + 1;

	while (bDone == false){
		int iAttempt = 1;
		do {
			cout << " Guess the number from 1 to 100: " << endl;
			scanf_s("%d", &iGuess);
			if (iNumber < iGuess) puts("The number is lower");
			else if (iNumber > iGuess) puts("The secret number is higher");
			if (iAttempt == 5) {
				bDone = true;
			}
			cout << "You have " << 5 - iAttempt << " attempts left" << endl;
		} while (iGuess != iNumber);
		iAttempt++;
	}

	cout << endl;

	if (iNumber == iGuess) puts("Congratulations, you guessed it!");
	else if (iNumber != iGuess) puts("Sorry, you did not guess it in 5!");

	cout << "Thank you for playing" << endl << endl;

	system("pause");
    return 0;
}

