#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief вычисление функции по заданной формуле
* \param a - константа
* \return результат
*/
void solution(int x);


/**
* \brief Точка входа в программу
* \param x - входное значение x
* \return Код ошибки (0-успех)
*/

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout « "Введите x = ";
	int x;
	cin » x;

	solution(x);

	return 0;
}


void solution(int x) //функция поиска решений
{
	int y;
	const int a = 1.65;
	if (x < 1.34)
	{
		y = 3.14 * pow(x, 2) - (7 / (pow(x, 2)));
		cout « "Значение y равно " « y « endl;
	}
	else if (x >= 1.4)
	{
		y = log(x + 7 * sqrt(x + a));
		cout « "Значение y равно " « y « endl;
	}
}