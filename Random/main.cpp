#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	//rand();
	//заполнение массива случайными числами
	int minRand;
	int maxRand;
	do
	{
		cout << "¬ведите минимально возможное случайное число: "; cin >> minRand;
		cout << "¬ведите максимально возможное случайное число: "; cin >> maxRand;
		if (minRand >= maxRand)cout << "Error: значени€ некорректны, попробуйте еще раз" << endl;
	} while (minRand >= maxRand);

	for (int i = 0; i < n; i++)
	{
		//arr[i] = rand()%50+50;
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	//вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}