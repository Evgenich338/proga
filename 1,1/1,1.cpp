#include <iostream>
#include <math.h>
using namespace std;
/**
* \brief ���������� ���������� A �� �������� �������
* \param �onst double x - ��������� ������ �� �������
* \param �onst double y - ��������� ������ �� �������
* \param �onst double z - ��������� ������ �� �������
* \return - �������� a
*/
double GetA(const double x, const double y, const double z);

/**
* \brief ���������� ���������� B �� �������� �������
* \param �onst double x - ��������� ������ �� �������
* \param �onst double y - ��������� ������ �� �������
* \param �onst double z - ��������� ������ �� �������
* \return - �������� b
*/
double GetB(const double x, const double y, const double z, double a);

/**
* \brief ����� ����� � ���������
* \return ��� ������(0 - �����)
*/
int main()
{
	const auto x = -0.5;
	const auto y = 1.7;
	const auto z = 0.44;

	const auto a = GetA(x, y, z);
	const auto b = GetB(x, y, z, a);

	cout � "x = " � x � ", y = " � y � ", z = " � z � '\n';
	cout � "a = " � a � ", b = " � b � endl;
	return 0;

}

double GetA(const double x, const double y, const double z)
{
	return exp(-y * z) * sin(x * z - y) - sqrt(abs(y * z + x));
}

double GetB(const double x, const double y, const double z, double a)
{
	return y * sin(pow(a * z, 2) * cos(2 * z)) - 1;
}