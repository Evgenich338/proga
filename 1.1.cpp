#include <iostream>
#include <cmath>
using namespace std;

/**
* \brief вычисление переменной A по заданной формуле
* \param сonst double x - константа данная по условию
* \param сonst double y - константа данная по условию
* \param сonst double z - константа данная по условию
* \return - значение a
*/
double GetA(const double x, const double y, const double z);

/**
* \brief вычисление переменной B по заданной формуле
* \param сonst double x - константа данная по условию
* \param сonst double y - константа данная по условию
* \param сonst double z - константа данная по условию
* \return - значение b
*/
double GetB(const double x, const double y, const double z, double a);

/**
* \brief Точка входа в программу
* \return Код ошибки(0 - успех)
*/
int main()
{
	const double x = -0.5;
	const double y = 1.7;
	const double z = 0.44;

	const double a = GetA(x, y, z);
	const double b = GetB(x, y, z, a);

	cout << "x = " << x << ", y = " << y << ", z = " << z << '\n';
	cout << "a = " << a << ", b = " << b << endl;
	return 0;

}

double GetA(const double x, const double y, const double z)
{
	return (exp(-y * z) * sin(x * z - y) - sqrt(abs(y * z + x)));
}

double GetB(const double x, const double y, const double z, double a)
{
	return y * sin(pow(a * z, 2) * cos(2 * z)) - 1;
}
