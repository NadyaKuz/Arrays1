#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-------------------\n"

//#define PORYDOK
//#define 
//#define 

void main()
{
	setlocale(LC_ALL, "");

#ifdef PORYDOK
	const int ROWS = 3;
	const int COLS = 3;
	int A[ROWS][COLS];;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;

	for (int i = 0; i < ROWS * COLS; i++)
	{
		for (int j = (COLS * ROWS) - 1; j > i; j--)
		{
			if (((int*)A)[j] < ((int*)A)[j - 1])
			{
				int buffer = ((int*)A)[j];
				((int*)A)[j] = ((int*)A)[j - 1];
				((int*)A)[j - 1] = buffer;
			}
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
#endif // PORYDOK
	
	