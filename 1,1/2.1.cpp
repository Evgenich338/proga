
#include <iostream>
using namespace std;

/**
* \brief сложение
*/
void sum(int a, int b);

/**
* \brief вычитание
*
*/
void difff(int a, int b);

/**
* \brief умножение
*
*/
void proizv(int a, int b);

/**
* \brief деление
*
*/
void chass(int a, int b);

/**
* \brief Точка входа в программу.
* \param a - переменная 1
* \param b - переменная 2
* \param f - переменная для выбора алгоритма
* \return Код ошибки (0 - успех).
*/

/**
* \brief выбор заполнения массива
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
	cout « "Введите а - ";
	cin » a;
	cout « "Введите b - ";
	cin » b;
	cout « "выберите что вы хотите сделать с переменными \n 1.сложение\n 2. вычитание\n 3.умножение\n 4.деление\n";
	cin » choice;
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
		cout « "Некоректный ввод.";
		break;
	}
}

void sum(int a, int b)
{
	cout«a + b;
}

void difff(int a, int b)
{
	cout«a - b;
}

void proizv(int a, int b) {
	cout«a* b;
}

void chass(int a, int b) {
	cout«a / b;
}