#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	//rand();
	//���������� ������� ���������� �������
	int minRand;
	int maxRand;
	do
	{
		cout << "������� ���������� ��������� ��������� �����: "; cin >> minRand;
		cout << "������� ����������� ��������� ��������� �����: "; cin >> maxRand;
		if (minRand >= maxRand)cout << "Error: �������� �����������, ���������� ��� ���" << endl;
	} while (minRand >= maxRand);

	for (int i = 0; i < n; i++)
	{
		//arr[i] = rand()%50+50;
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}