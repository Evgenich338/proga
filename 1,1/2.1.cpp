
#include <iostream>
using namespace std;

/**
* \brief ��������
*/
void sum(int a, int b);

/**
* \brief ���������
*
*/
void difff(int a, int b);

/**
* \brief ���������
*
*/
void proizv(int a, int b);

/**
* \brief �������
*
*/
void chass(int a, int b);

/**
* \brief ����� ����� � ���������.
* \param a - ���������� 1
* \param b - ���������� 2
* \param f - ���������� ��� ������ ���������
* \return ��� ������ (0 - �����).
*/

/**
* \brief ����� ���������� �������
*/
enum path
{
	Sum = 1,
	diff = 2,
	proiz = 3,
	chas = 4
};

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, choice;
	cout � "������� � - ";
	cin � a;
	cout � "������� b - ";
	cin � b;
	cout � "�������� ��� �� ������ ������� � ����������� \n 1.��������\n 2. ���������\n 3.���������\n 4.�������\n";
	cin � choice;
	const auto filling = static_cast<path>(choice);
	switch (filling) {
	case path::Sum:
	{
		sum(a, b);
		break;
	}
	case path::diff:
	{
		difff(a, b);
		break;
	}
	case path::proiz:
	{
		proizv(a, b);
		break;
	}
	case path::chas:
	{
		chass(a, b);
		break;
	}
	default:
		cout � "����������� ����.";
		break;
	}
}

void sum(int a, int b)
{
	cout�a + b;
}

void difff(int a, int b)
{
	cout�a - b;
}

void proizv(int a, int b) {
	cout�a* b;
}

void chass(int a, int b) {
	cout�a / b;
}