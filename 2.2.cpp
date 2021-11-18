#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief вычисление функции по заданной формуле
* \param a - константа
* \return результат
*/
double solution(double x);


/**
* \brief Точка входа в программу
* \param x - входное значение x
* \return Код ошибки (0-успех)
*/

int main()
{
setlocale(LC_ALL, "Russian");
cout << "Введите x = ";
double x;
cin >> x;
double rezult = solution(x);
cout<<rezult;
return 0;
}


double solution(double x) //функция поиска решений
    {
    const double a = 1.65;
    if (x < 1.34)
        return  ( 3.14 * pow(x, 2) - ( 7 / ( pow(x, 2) ) ) );
    return ( log( x+7 * sqrt(x+a) ) );
    }

