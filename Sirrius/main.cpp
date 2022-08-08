#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 3;
	int A[n][n] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}

	int B[n][n * 2] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = B[i][j + n] = A[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}

	int diag_1 = 0;
	for (int i = 0; i < n; i++)
	{
		int D = 1;	
		for (int j = 0; j < n; j++)
		{
			D *= B[j][i + j];
		}
		diag_1 += D;
	}

	int diag_2 = 0;
	for (int i = 0; i < n; i++)
	{
		int D = 1;
		for (int j = 0; j < n; j++)
		{
			D *= B[n - 1 - j][i + j];
		}
		diag_2 += D;
	}
	cout << "Определитель матрицы: " << diag_1 - diag_2 << endl;
}
