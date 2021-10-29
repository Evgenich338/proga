#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief ���������� ������� �� �������� �������
* \param a - ���������
* \return ���������
*/
void solution(int x);


/**
* \brief ����� ����� � ���������
* \param x - ������� �������� x
* \return ��� ������ (0-�����)
*/

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout � "������� x = ";
	int x;
	cin � x;

	solution(x);

	return 0;
}


void solution(int x) //������� ������ �������
{
	int y;
	const int a = 1.65;
	if (x < 1.34)
	{
		y = 3.14 * pow(x, 2) - (7 / (pow(x, 2)));
		cout � "�������� y ����� " � y � endl;
	}
	else if (x >= 1.4)
	{
		y = log(x + 7 * sqrt(x + a));
		cout � "�������� y ����� " � y � endl;
	}
}