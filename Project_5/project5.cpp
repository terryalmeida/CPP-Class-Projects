//Terry Almeida

#include<string>
#include<iomanip>
#include<iostream>
using namespace std;

//step 1.
int main() 
{
	//a.
	double dArr[5];
	//b.
	long lArr[7] = { 100000, 134567, 123456, 9, -234567, -1, 123489};
	//c.
	const int ROWS = 3, COLS = 5;
	int iArr[ROWS][COLS];
	//d.
	char sName[30] = {"Terry Almeida"};

	//step 2.
	short cnt1;
	short cnt2;
	long double total;

	//step 3.
	long highest;
		
	//step 4.
	unsigned seed = time(0);
	srand(seed);
	for (cnt1 = 0; cnt1 < 5; cnt1++)
		dArr[cnt1] = rand();
	for (double val : dArr)
		cout << val << " ";

	//step5.
	total = 0;
	double average;
	for (double val : dArr)
		total += val;
	average = (total / 5.0);

	//step6.
	cout << "\nThe dArr array total is: " << total;
	cout << "\nThe dArr array average is: " << average;

	//step7.
	for (cnt1 = 1, highest = lArr[0]; cnt1 < 7; cnt1++)
	{
		if (lArr[cnt1] > highest)
			highest = lArr[cnt1];
	}

	//step8.
	cout << "\nThe highest in the lArr array is " << highest << endl;

	//step9.
	
	for (cnt1 = 0; cnt1 < ROWS; cnt1++)
	{
		for (cnt2 = 0; cnt2 < COLS; cnt2++)
		{
			iArr[cnt1][cnt2] = (rand() % (53 - 1 + 1)) + 1;
		}
	}

	//step10.
	for (int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLS; y++)
		{
			cout << setw(3) << iArr[x][y];
		}
		cout << endl;
	}

	//step11.
	for (int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLS; y++)
		{
			cout << setw(3) << iArr[x][y];
		}
		cout << endl;
	}
	
	//step12.
	cin.getline(sName, 30);
	cout << endl;

	//step 13.
	cnt1 = 0;
	while (cnt1 < 30)
	{
		cout << int(sName[cnt1]) << endl;
		cnt1++;
		if (sName[cnt1] == 0)
			break;
	}
	
	//step 14.
	strcpy_s(sName, "Albert Einstein");
	cout << sName;
	cout << endl;
	
	//step 15.
	cout << "Ascii value of 12th character is " << int(sName[11]);
	cout << endl;

	//step 16.
	double *pdArray;

	//step 17.
	pdArray = dArr;

	//step 18.
	for (cnt1 = 0; cnt1 < 5; cnt1++)
		cout << dArr[cnt1] << " ";
	cout << endl;

	//step19.
	for (cnt1 = 0; cnt1 < 5; cnt1++)
		cout << *(pdArray + cnt1) << " ";
	cout << endl;

	//step20.
	for (cnt1 = 0; cnt1 < 5; cnt1++)
	{
		cout << *pdArray;
		pdArray++;
	}
	cout << endl;

	//step21.
	for (cnt1 = 0; cnt1 < 5; cnt1++)
	{
		cout << *(dArr + cnt1);
	}
	cout << endl;

	//step22.
	const int SIZE = 100;
	int *piArray = new int[SIZE];

	//step23.
	for (cnt1 = 0; cnt1 < SIZE; cnt1++)
	{
		piArray[cnt1] = (rand() % (49) + 1);
		cout << piArray[cnt1] << " ";
	}
	cout << endl;
	//step24.
	for (cnt1 = 0; cnt1 < 10; cnt1++)
		cout << piArray[cnt1];
}

