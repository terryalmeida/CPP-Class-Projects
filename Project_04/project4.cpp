//Terry Almeida

#include <iostream>
using namespace std;

//function prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int score1, int score2, int score3, int score4, int score5);

int main() 
{
	int score1, score2, score3, score4, score5; //define scores 1-5
	cout << "Enter first "; //print to indicate it is first score
	getScore(score1); //call getScore function for each of the 5 scores called
	cout << "Enter second "; //print to indicate it is second score
	getScore(score2);
	cout << "Enter third "; //print to indicate it is third score
	getScore(score3);
	cout << "Enter fourth ";  //print to indicate it is fourth score
	getScore(score4);
	cout << "Enter fifth "; //print to indicate it is fifth score
	getScore(score5);
	calcAverage(score1, score2, score3, score4, score5); // call calcAverage function and pass the 5 scores to it
	return 0; //return 0 to end program safely
}

void getScore(int& score) //getScore function with reference to score
{
	cout << "test score: "; // prompt for test score
	cin >> score; //ask for user input of score
	while (score > 100 || score < 0) //input validation is score is not 100-0
	{
		cout << "Invalid test score. Test score must be between 0-100. Try again: "; //print input validation error response
		cin >> score; //allow user to input test score again
	}
	
}

void calcAverage(int score1, int score2, int score3, int score4, int score5) //calcAverage function with the five score parameters
{
	int lowest = findLowest(score1, score2, score3, score4, score5); //define lowest as findLowest function with scores passed to it
	double average = ((score1 + score2 + score3 + score4 + score5) - lowest) / 4.0; //define average as double, and calculate score 1-5 - lowest divided by 4
	cout << "\nThe average of the four highest scores: " << average; //print the average of the four highest scores
	cout << "\nThe lowest score was: " << lowest; //print the lowest score
	return; 
}

int findLowest(int score1, int score2, int score3, int score4, int score5) // findLowest function with the five score parameters
{
	int lowest = score1; //define lowest as score 1
	if (lowest > score2) //if lowest is larger than score2, then equal to 2, and so on to determine which score is the lowest.
		lowest = score2;
	if (lowest > score3)
		lowest = score3;
	if (lowest > score4)
		lowest = score4;
	if (lowest > score5)
		lowest = score5;
	
	return lowest; //return lowest value score
}

