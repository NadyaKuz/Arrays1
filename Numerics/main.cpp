#include<iostream>
using namespace std;
using std::cout;

//#define dec_2_bin

void main()
{
	setlocale(LC_ALL, "");
	/*for (;;)
{
	cout << "hello numerics";
}*/

//cout << (int)'a' << endl;
	//for (int i = 0; i < 256; i++)cout << i << "\t" << char(i) << endl;

	

#ifdef dec_2_bin
    int decimal;	//десятичное число введенное пользоваьелем
	cout << "введите десятичное число: "; cin >> decimal;
	const int max_size = 32;	//int - 4 bytes = 32bit
	bool bin[max_size] = {};	//этот массив будет хранить разряды двоичного числа

	int i = 0;	//счетчик разрядов
	/*while (decimal)
	{
		bin[i] = decimal % 2;	//получаем младший разряд двоичного числа
		decimal /= 2;	//убираем полученный разряд двоичного числа
		i++;
	}*/
	for (; decimal; bin[i] = decimal % 2, decimal /= 2, i++);
	/*{
		;	//получаем младший разряд двоичного числа
		;	//убираем полученный разряд двоичного числа
		;
	}*/

	for (; decimal; i++, decimal /= 2)bin[i] = decimal % 2;
	//comma operator
	//	expression1, expression2, expression3

	//i--;
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif // dec_2_bin


	/*int chiclo;
	cout << "Введите десятичное число: "; cin >> chiclo;
	const int n = 8;
	char hex[n] = {};
	int i = 0;
	for (; chiclo; i++, chiclo /= 16)
	{
		hex[i] = chiclo % 16;
		hex[i] += hex[i] < 10 ? 48 : 55;
	}
	cout << "0x";	
	for (--i; i >= 0; i--)
	{
		cout << hex[i];
	}
	cout << endl;
*/

	int decimal;	//десятичное число введенное пользоваьелем
	cout << "введите десятичное число: "; cin >> decimal;
	const int n = 8;
	char hex[n] = {};
	int i = 0;
	for (; decimal; i++, decimal /= 16)
	{
		hex[i] = decimal % 16;//Остаток от деления ВСЕГДА СТРОГО МЕНЬШЕ ДЕЛИТЕЛЯ
		hex[i] += hex[i] < 10 ? 48 : 55;
		//decimal /= 16;
	}

	cout << "0x";	//Это префикс, показывающий, что число записано в Hexadecimal
	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])
		{
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
		default:cout << hex[i];
		}*/
		/*if (hex[i] < 10)
		{
			cout << char(hex[i] + 48);
		}
		else
		{
			cout << char(hex[i] + 55);
		}*/
		//cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);	//int
		//cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));			//int
		cout << hex[i];
	}
	cout << endl;
}
