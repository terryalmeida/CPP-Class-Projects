//Tery Almeida COP2220
#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;

int main()
{
	//1. Define four variables as int and assign a random number.
	int DieRoll, Guess, cnt1, cnt2;
	srand((unsigned int)time(NULL));

	//2. Prompt the user for a whole number between 1 and 6.
	cout << "Enter a whole number between 1 and 6: ";

	//3. Assign user input to Guess
	cin >> Guess;

	//4. Assign DieRoll variable to random number
	DieRoll = rand() % 6 + 1;

	//5. Print guessed number and dieroll number
	// If guess is equal to dieroll, print string WINNER
	cout << Guess << " was the guessed number. \n";
	cout << DieRoll << " was the dieroll. \n";
	if (Guess == DieRoll)
		cout << "WINNER\n";

	//6. If DieRoll is odd, print string DOUBLEWINNER
	if (DieRoll % 2 != 0)
		cout << "DOUBLEWINNER\n";

	//7. If total dieroll is greater or equal to 10 AND DieRoll is even, print YOU ARE A LUCKY PERSON
	if ((Guess + DieRoll >= 10) && (DieRoll % 2 == 0))
		cout << "YOU ARE A LUCKY PERSON\n";

	//8. for loop. initialize cnt1 as equal to 1, test until 5, in +1 increments (++). Then print in a single line. 
	for (cnt1 = 1; cnt1 <= 5; cnt1++)
		cout << cnt1;
	cout << '\n';
	//9. for loop. initialize cnt2 as 100, test until 0 in -1 increments. Only print if remainder of 17 is 0
	for (cnt2 = 100; cnt2 >= 0; --cnt2)
		if ((cnt2 % 17) == 0)
			cout << cnt2;
	cout << '\n';

	//10. declare cnt2 equal to 100, while cnt2 is greater than or equal to 0, keep substracting 1 from 100 and print all numbers evenly divisible by 17
	cnt2 = 100;
	while (cnt2 >= 0)
	{
		cnt2--;
		if ((cnt2 % 17) == 0)
			cout << cnt2;
	}
	cout << '\n';
	//11. do while loop to prompt user for number, assign input to Guess variable and print remainder of guess after dividing by 5. Then if input is 0, end loop.
	do
	{
		cout << "\nEnter a number (Enter '0' to end the program): ";
		cin >> Guess;
		cout << "The remainder is " << Guess % 5;
	} while (Guess != 0); 
	cout << '\n';

	//12. for loop counting to five, then for loop inside counting to six and printing the product of cnt1 and cnt2 in a loop separated by a tab
	for (cnt1 = 1; cnt1 <= 5; cnt1++)
	{
		cout << cnt1 << "\n";
		for (cnt2 = 1; cnt2 <= 6; cnt2++)
		{
			cout << (cnt1 * cnt2) << "\t";
		}

	}
}
