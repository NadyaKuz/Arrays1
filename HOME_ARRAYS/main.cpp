#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-------------------\n"

//#define PORYDOK
//#define UNIQUE
#define NEVER_BEFORE


void main()
{
	setlocale(LC_ALL, "");
	
#ifdef PORYDOK
	const int ROWS = 3;
	const int COLS = 3;
	int A[ROWS][COLS];

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

#ifdef UNIQUE
	const int ROWS = 10;
	const int COLS = 10;

	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;	//Флаг уникальности
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;	//Предполагаем, что сгенерировалось уникально случайное число
				//но, это нужно проветрить:
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				//int l;
				//if (k == i)l = j + 1;
				//else l = 0;
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//arr[i][j] - выбранный элемент
					//arr[k][l] - перебираемый элемент
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
#endif // UNIQUE

#ifdef NEVER_BEFORE

	const int ROWS = 5;
	const int COLS = 5;
	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool never_before = true;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						never_before = false;
						break;
					}
				}
			}
			if (never_before);
			{
				int count = 0;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							count++;
						}
					}
				}
				if (count > 0)
					cout << arr[i][j] << " повторяется " << count << " раз " << endl;
			}
		}
	}
#endif // NEVER_BEFORE

}
	