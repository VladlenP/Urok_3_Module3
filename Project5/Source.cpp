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
	cout << "��������� ���� ��������:" << i << " " << "���" << endl;
	cout << "������� ����� �������" << endl;
	short unsigned int x = 0;
	cin >> x;
#pragma region Task 1
	if (x == 1) {
		i++;
		system("cls");
		//������ ���� �� ����� � � � ��������
		int x;
		int y;
		cout << "������� ����� A � B" << endl;
		cin >> x;
		cin >> y;
		if ((x % 2) == 1 && (y % 2) != 1) {
			cout << "������ ���� �� ����� ��������" << endl;
		}
		else if ((x % 2) != 1 && (y % 2) == 1) {
			cout << "������ ���� �� ����� ��������" << endl;
		}
		else {
			cout << "����������� �� �������������" << endl;
		}
		cout << "�� ������ ����������?" << endl;
		if (cin >> y) {
			goto start;
		}
	}
#pragma endregion
#pragma region Task 2
	if (x == 2) {
		i++;
		system("cls");
		//������ � � � ����� ���������� ���������
		int x;
		int y;
		int z;
		cout << "������� ����� A � B" << endl;
		cin >> x;
		cin >> y;
		cin >> z;
		if ((x % 2) == 1 && (y % 2) == 1) {
			cout << "������" << endl;
		}
		else if ((x % 2) == 0 && (y % 2) == 0) {
			cout << "������" << endl;
		}
		else {
			cout << "����������� �� �������������" << endl;
		}
		cout << "�� ������ ����������?" << endl;
		if (cin >> y) {
			goto start;
		}
	}
#pragma endregion
#pragma region Task 3
	if (x == 3) {
		i++;
		system("cls");
		//������� �� ����� �,�,� �������������
		int a;
		int b;
		int c;
		cout << "������� ����� A,B � C" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a > 0 && b > 0 && c > 0) {
			cout << "������ �� ����� �,�,� �������������" << endl;
		}
		else {
			cout << "����������� �� �������������" << endl;
		}
		cout << "�� ������ ����������?" << endl;
		if (cin >> y) {
			goto start;
		}
	}
#pragma endregion
#pragma region Task 4
	if (x == 4) {
		i++;
		system("cls");
		//����� �� ���� �� ����� �,�,� �������������
		int a;
		int b;
		int c;
		cout << "������� ����� A,B � C" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a > 0 || b > 0 || c > 0) {
			cout << "���� �� ���� �� ����� �,�,� �������������" << endl;
		}
		else {
			cout << "����������� �� �������������" << endl;
		}
		cout << "�� ������ ����������?" << endl;
		if (cin >> y) {
			goto start;
		}
	}
#pragma endregion
#pragma region Task 3
	if (x == 3) {
		i++;
		system("cls");
		//������ ���� �� ����� �,�,� �������������
		int a;
		int b;
		int c;
		cout << "������� ����� A,B � C" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a > 0 && b >!0 && c >!0) {
			cout << "����� A �������������" << endl;
		}
		else if (a >!0 && b > 0 && c >!0) {
			cout << "����� B �������������" << endl;
		}
		else if (a >!0 && b >!0 && c > 0) {
			cout << "����� C �������������" << endl;
		}
		else {
			cout << "�� ���� �� ����� �� �������������" << endl;
		}
		cout << "�� ������ ����������?" << endl;
		if (cin >> y) {
			goto start;
		}
	}
#pragma endregion
#pragma region Task 5
	if (x == 5) {
		i++;
		system("cls");
		//������ ��� �� ����� �,�,� �������� ��������������
		int a;
		int b;
		int c;
		cout << "������� ����� A,B � C" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a > 0 && b > 0 && c >!0) {
			cout << "����� ��� �� ����� �,�,� �������� ��������������" << endl;
		}
		else if (a >!0 && b > 0 && c > 0) {
			cout << "����� ��� �� ����� �,�,� �������� ��������������" << endl;
		}
		else if (a > 0 && b >!0 && c > 0) {
			cout << "����� ��� �� ����� �,�,� �������� ��������������" << endl;
		}
		else {
			cout << "�� ���� �� ����� �� �������������" << endl;
		}
		cout << "�� ������ ����������?" << endl;
		if (cin >> y) {
			goto start;
		}
	}
#pragma endregion
}