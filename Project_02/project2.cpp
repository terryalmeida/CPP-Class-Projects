//Terry Almeida
#include<iostream>
using namespace std;

int main()
{
	int US_POPULATION; // Define US Population as int
	float AVG_FAMILY_INCOME; // Define average family income as float
	float HOURLY_WAGE; //Define hourly wage as float
	short int TOTAL_SPC_STUDENTS; //Define Total SPC Students as short int
	float FLORIDA_GNP; //Define Florida GNP as float
	char GENDER; //Define Gender as char
	
	cout << "Enter the US population (no commas):"; //Prompt user to enter the US Population
	cin >> US_POPULATION; //Assign user input to this variable
	cout << "Enter the average family income in the US (no commas):"; //Prompt user to enter family income in the US
	cin >> AVG_FAMILY_INCOME;//Assign user input to this variable
	cout << "Enter the hourly wage of 1 family member (no commas):"; //Prompt user to enter the hourly wage of 1 family member
	cin >> HOURLY_WAGE;//Assign user input to this variable
	cout << "Enter the count of the total student attending SPC (no commas):"; //Prompt user to enter the count of the total student attending SPC
	cin >> TOTAL_SPC_STUDENTS;//Assign user input to this variable
	cout << "Enter the total GNP of Florida (no commas):"; //Prompt user to enter the total GNP of Florida
	cin >> FLORIDA_GNP;//Assign user input to this variable
	cout << "Enter the person's gender:"; //Prompt user to enter the person's gender
	cin >> GENDER;//Assign user input to this variable

	cout << US_POPULATION << "\n"; //Display this variable
	cout << AVG_FAMILY_INCOME << "\n"; //Display this variable
	cout << HOURLY_WAGE << "\n"; //Display this variable
	cout << TOTAL_SPC_STUDENTS << "\n"; //Display this variable
	cout << FLORIDA_GNP << "\n"; //Display this variable
	cout << GENDER << "\n"; //Display this variable

	cout << "\a"; //Beep 1
	cout << "\a"; //Beep 2
	cout << "\a"; //Beep 3
	cout << "\a"; //Beep 4
	cout << "\a"; //Beep 5

	system("pause"); //pause program

	//Collaboration with Chapter 3 slides, Chapter Program notes, and textbook.



}
