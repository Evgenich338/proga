#include <iostream>
#include <math.h>

using namespace std;

/
*\brief ������� ��� ������� y
* \param x �������� x
* \return �������� y
* /
double GetY(double x);

/
*\brief ���� �������� � � ���������
* \return �������� ��������
* /
int main()
{
	setlocale(LC_ALL, "Russian");

	double x;
	cout � "������� �������� x = ";
	cin � x;
	const int LOW_BOUND = 1;
	const int UP_BOUND = 3;
	const double step = 0.2;


	for (x; x >= LOW_BOUND && x <= UP_BOUND; x += step)

	{
		if (x >= LOW_BOUND && x <= UP_BOUND)
		{
			auto y = GetY(x);

			cout � " y = " � y � "\n";
		}
		else
		{
			auto y = GetY(x);
			cout � " y = " � y � "\n" � "��� �������, ��� ��� � �� ������ � ������� ����������� " � endl;
		}
	}
	return 0;
}

double GetY(double x)
{
	return sin(log(x)) - cos(log(x)) + 2 * log(x);
}