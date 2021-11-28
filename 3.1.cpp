#include <iostream>
#include <cmath>

using namespace std;

/**
*\brief Функция для расчета y
*\param x Параметр x
*\return Параметр y
*/
double GetY(double x);

/**
*\brief Ввод значения х в программу
*\return Конечное значение
*/
int main()
{
setlocale(LC_ALL, "Russian");

double LOW_BOUND = 1;
const double UP_BOUND = 3;
const double step = 0.2;

while(LOW_BOUND<=UP_BOUND){
	cout<<"X"<<x<<"Funcion"<<GetY(LOW_BOUND)<<"\n";
	LOW_BOUND += step;
	
}
}
return 0;
}


double GetY(double x)
{
return ( sin ( log(x) ) - cos ( log(x) ) + 2 * log(x) );
}

