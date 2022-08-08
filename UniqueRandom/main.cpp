#include<iostream>
#include<Windows.h>
#include<time.h>
using namespace std;
using std::cout;

#define  tab "\t"

#define  SdvigVpravo
//#define  UNICAL
//#define  POVTOR

void main()
{
	setlocale(LC_ALL, "");

#ifdef SdvigVpravo

	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int j = 0;
	int c;
	cout << "Введите количество сдвигов: ";  cin >> c;
	for (int j = 1; j <= c; j++)
	{
		int a;
		a = arr[n - 1];

		for (int i = n - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = a;

		system("CLS");

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
		Sleep(1000);

     }
#endif // SdvigVpravo

#ifdef UNICAL 
	const int n = 10;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
			    i--;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

#endif // UNICAL 

#ifdef POVTOR
	srand(time(NULL));
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << "Повторяющиеся - " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				int f = 0;
				for (int k = 0; k < i; k++)
				{
					if (arr[k] == arr[i])
						f = 1;
				}
				if (f == 0)
					cout << arr[i] << tab;
				break;
			}
		}
	}
	cout << endl;
#endif // POVTOR

		
}


				