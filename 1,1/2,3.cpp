#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief ���������� ������� �� �������� �������
* \param x - ������� �������� x
* \param y - ������� �������� y
* \return ���������
*/
void chek(int x, int y);


/**
* \brief ����� ����� � ���������
* \param x - ������� �������� x
* \param y - ������� �������� y
* \return ��� ������ (0-�����)
*/

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout � "������� x = ";
	int x, y;
	cin � x�y;

	chek(x, y);

	return 0;
}


void chek(int x, int y)
{

	if (x < y)
	{
		y = (x + y) / 2;
		x = (x * y) * 2;
		cout � "x = " � x � "\n y = "�y;
	}
	else if (x > y)
	{
		x = (x + y) / 2;
		y = (x * y) * 2;
		cout � "x = " � x � "\n y = "�y;
	}
	else if (y == x) {
		cout�"����� �����, ������������ �������!";
	}
}