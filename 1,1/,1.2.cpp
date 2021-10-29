#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief функция вычисления + - * /
* \param double a - переменная a
* \param double b - переменная b
* \return выводит + - * / перменных а и b
*/
void GetDistance(const double a, const double b);


/**
* \brief Точка входа в программу
* \param double a - переменная a
* \param double b - переменная b
* \return Код ошибки(0 - успех)
*/
int main()
{


	double a, b;
	cout « "input x2 and y2" « "\n";
	cin » a » b;

	GetDistance(a, b);

	return 0;
}

void GetDistance(const double a, const double b)
{
	cout«a + b«"\n"«a - b«"\n"«a * b«"\n"«a / b;
}
