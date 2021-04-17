// Входные данные:
// 1.Ввод двух чисел с клавиатуры.
// 2.Числа - целые или дробные.

// Основная задача:
// Написать программу, которая будет складывать, вычитать, умножать или делить два числа.

// Промежуточные этапы:
// 1.Ввод двух чисел с клавиатуры и ввод знаков операции.
// 2.Программа должна запрашивать новые данные для вычисления и завершаться только при вводе числа 0.
// 3.Сообщать пользователю,если был введен неверный знак и при этом снова запрашивать знак операции.
// 4.Напоминание пользователю о невозможности деления на 0.
#include <iostream>
using namespace std;

int inputNum1();
int inputNum2();

int main()
{
	int num1, num2, num3;
	char sign;
	do {
		int num1 = inputNum1();
		cin >> sign;
		int num2 = inputNum2();
		if (sign == '-') {
			num3 = num1 - num2;
			cout << num1 << "-" << num2 << "=" << num3;
		}
		else if (sign == '+') {
			num3 = num1 + num2;
			cout << num1 << "+" << num2 << "=" << num3;
		}
		else if (sign == '/') {
			num3 = num1 / num2;
			cout << num1 << "/" << num2 << "=" << num3;
			if (num2 == 0)
				cout << "Wrong";
		}
		else if (sign == '*') {
			num3 = num1 * num2;
			cout << num1 << "*" << num2 << "=" << num3;
		}
		else
			cout << "Wrong sign"<<endl;
	} while (num1 != 0 or num2 != 0);
	return 0;
}

int inputNum1() {
	int num1;
		cout << "Input first num:";
		cin >> num1;
	return num1;
}

int inputNum2() {
	int num2;
		cout << "Input second num:";
		cin >> num2;
	return num2;
}