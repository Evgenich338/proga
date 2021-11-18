#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief функция вычисления  +
* \param double value1 - переменная воодимая user-ом
* \param double value2 - переменная воодимая user-ом
* \return выводит + перменных value1 и value2
*/
int GetDistancePlus(const double value1, const double value2);

/**
* \brief функция вычисления  -
* \param double value1 - переменная воодимая user-ом
* \param double value2 - переменная воодимая user-ом
* \return выводит - перменных value1 и value2
*/
int GetDistanceMinus(const double value1, const double value2);

/**
* \brief функция вычисления  *
* \param double value1 - переменная воодимая user-ом
* \param double value2 - переменная воодимая user-ом
* \return выводит * перменных value1 и value2
*/
int GetDistanceplusMultiplication(const double value1, const double value2);

/**
* \brief функция вычисления  /
* \param double value1 - переменная воодимая user-ом
* \param double value2 - переменная воодимая user-ом
* \return выводит / перменных value1 и value2
*/
int GetDistancedivision(const double value1, const double value2);


/**
* \brief Точка входа в программу
* \param double a - переменная a
* \param double b - переменная b
* \return Код ошибки(0 - успех)
*/
int main()
{


double value1,value2;
cout << "input value 1 and value 2" << "\n";
cin >> value1 >> value2;

double plus = GetDistancePlus(value1,value2);
double minus = GetDistanceMinus(value1,value2);
double multiplication = GetDistanceplusMultiplication(value1,value2);
double division = GetDistancedivision(value1,value2);

cout<<plus<<" "<<minus<<" "<<multiplication<<" "<<division;

return 0;
}

int GetDistancePlus(const double value1, const double value2)
{
return value1+value2;
}

int GetDistanceMinus(const double value1, const double value2)
{
return value1-value2;
}

int GetDistanceplusMultiplication(const double value1, const double value2)
{
return value1*value2;
}

int GetDistancedivision(const double value1, const double value2)
{
return value1/value2;
}
