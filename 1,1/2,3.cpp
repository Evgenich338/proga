#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief вычисление функции по заданной формуле
* \param x - входное значение x
* \param y - входное значение y
* \return результат
*/
void chek(int x, int y);


/**
* \brief Точка входа в программу
* \param x - входное значение x
* \param y - входное значение y
* \return Код ошибки (0-успех)
*/

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout « "Введите x = ";
	int x, y;
	cin » x»y;

	chek(x, y);

	return 0;
}


void chek(int x, int y)
{

	if (x < y)
	{
		y = (x + y) / 2;
		x = (x * y) * 2;
		cout « "x = " « x « "\n y = "«y;
	}
	else if (x > y)
	{
		x = (x + y) / 2;
		y = (x * y) * 2;
		cout « "x = " « x « "\n y = "«y;
	}
	else if (y == x) {
		cout«"Числа равны, противоречие условию!";
	}
}