#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief ������� ���������� + - * /
* \param double a - ���������� a
* \param double b - ���������� b
* \return ������� + - * / ��������� � � b
*/
void GetDistance(const double a, const double b);


/**
* \brief ����� ����� � ���������
* \param double a - ���������� a
* \param double b - ���������� b
* \return ��� ������(0 - �����)
*/
int main()
{


	double a, b;
	cout � "input x2 and y2" � "\n";
	cin � a � b;

	GetDistance(a, b);

	return 0;
}

void GetDistance(const double a, const double b)
{
	cout�a + b�"\n"�a - b�"\n"�a * b�"\n"�a / b;
}
