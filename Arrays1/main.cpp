#include<iostream>
using namespace std;

#define  tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	/*const int n = 5;
	int arr[n] = { 3, 5, 8 };
	//arr[2] = 123;

	//����� ������� �� ����� � ����������
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//����� ������� � �������� �������
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//���������� ����� ��������� �������
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������� �������������� ��������� �������: " << (double)sum / n << endl;

	//����� ������������ � ������������� �������� � �������:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "���������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;*/

	const int n = 10;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int j = 0;
	int c;
	cout << "������� ���������� �������: ";  cin >> c;
	for (int j = 1; j <= c; j++)
	{
		int a;
		a = arr[n - 1];

		for (int i = n - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = a;

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}