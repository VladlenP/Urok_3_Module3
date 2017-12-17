#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	int i = 0;
	char y;
start:
	cout << "Программа была запущена:" << i << " " << "раз" << endl;
	cout << "Введите номер задания" << endl;
	short unsigned int x = 0;
	cin >> x;
#pragma region Task 1
	if (x == 1) {
		i++;
		system("cls");
		//«Ровно одно из чисел А и В нечётное»
		int x;
		int y;
		cout << "Введите числа A и B" << endl;
		cin >> x;
		cin >> y;
		if ((x % 2) == 1 && (y % 2) != 1) {
			cout << "Только одно из чисел нечетное" << endl;
		}
		else if ((x % 2) != 1 && (y % 2) == 1) {
			cout << "Только одно из чисел нечетное" << endl;
		}
		else {
			cout << "Утверждение не подтвердилось" << endl;
		}
		cout << "Вы хотите продолжить?" << endl;
		if (cin >> y) {
			goto start;
		}
	}
#pragma endregion
#pragma region Task 2
	if (x == 2) {
		i++;
		system("cls");
		//«Числа А и В имеют одинаковую четность»
		int x;
		int y;
		int z;
		cout << "Введите числа A и B" << endl;
		cin >> x;
		cin >> y;
		cin >> z;
		if ((x % 2) == 1 && (y % 2) == 1) {
			cout << "Истина" << endl;
		}
		else if ((x % 2) == 0 && (y % 2) == 0) {
			cout << "Истина" << endl;
		}
		else {
			cout << "Утверждение не подтвердилось" << endl;
		}
		cout << "Вы хотите продолжить?" << endl;
		if (cin >> y) {
			goto start;
		}
	}
#pragma endregion
#pragma region Task 3
	if (x == 3) {
		i++;
		system("cls");
		//«Каждое из чисел А,В,С положительное»
		int a;
		int b;
		int c;
		cout << "Введите числа A,B и C" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a > 0 && b > 0 && c > 0) {
			cout << "Каждое из чисел А,В,С положительное" << endl;
		}
		else {
			cout << "Утверждение не подтвердилось" << endl;
		}
		cout << "Вы хотите продолжить?" << endl;
		if (cin >> y) {
			goto start;
		}
	}
#pragma endregion
#pragma region Task 4
	if (x == 4) {
		i++;
		system("cls");
		//«Хотя бы одно из чисел А,В,С положительное»
		int a;
		int b;
		int c;
		cout << "Введите числа A,B и C" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a > 0 || b > 0 || c > 0) {
			cout << "Хотя бы одно из чисел А,В,С положительное" << endl;
		}
		else {
			cout << "Утверждение не подтвердилось" << endl;
		}
		cout << "Вы хотите продолжить?" << endl;
		if (cin >> y) {
			goto start;
		}
	}
#pragma endregion
#pragma region Task 3
	if (x == 3) {
		i++;
		system("cls");
		//«Ровно одно из чисел А,В,С положительное»
		int a;
		int b;
		int c;
		cout << "Введите числа A,B и C" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a > 0 && b >!0 && c >!0) {
			cout << "Число A положительное" << endl;
		}
		else if (a >!0 && b > 0 && c >!0) {
			cout << "Число B положительное" << endl;
		}
		else if (a >!0 && b >!0 && c > 0) {
			cout << "Число C положительное" << endl;
		}
		else {
			cout << "Ни одно из чисел не положительное" << endl;
		}
		cout << "Вы хотите продолжить?" << endl;
		if (cin >> y) {
			goto start;
		}
	}
#pragma endregion
#pragma region Task 5
	if (x == 5) {
		i++;
		system("cls");
		//«Ровно два из чисел А,В,С являются положительными»
		int a;
		int b;
		int c;
		cout << "Введите числа A,B и C" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a > 0 && b > 0 && c >!0) {
			cout << "Ровно два из чисел А,В,С являются положительными" << endl;
		}
		else if (a >!0 && b > 0 && c > 0) {
			cout << "Ровно два из чисел А,В,С являются положительными" << endl;
		}
		else if (a > 0 && b >!0 && c > 0) {
			cout << "Ровно два из чисел А,В,С являются положительными" << endl;
		}
		else {
			cout << "Ни одно из чисел не положительное" << endl;
		}
		cout << "Вы хотите продолжить?" << endl;
		if (cin >> y) {
			goto start;
		}
	}
#pragma endregion
}