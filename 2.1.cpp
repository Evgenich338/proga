#include <iostream>
using namespace std;

/**
* \brief сложение
*\ param value1 переменная вводимая пользователем
*\ param value2 переменная вводимая пользователем
*/
double addition(double value1, double value2);

/**
* \brief вычитание
*\ param value1 переменная вводимая пользователем
*\ param value2 переменная вводимая пользователем
*/
double difff(double value1, double value2);

/**
* \brief умножение
*\ param value1 переменная вводимая пользователем
*\ param value2 переменная вводимая пользователем
*/
double multiplication(double value1, double value2);

/**
* \brief деление
*\ param value1 переменная вводимая пользователем
*\ param value2 переменная вводимая пользователем
*/
double chass(double value1, double value2);

enum path
{
sum = 1,
diff = 2,
multiply = 3,
chas = 4
};

/**
* \brief Точка входа в программу.
* \param value1 - переменная вводимая user-ом
* \param value2 - переменная вводимая user-ом
* \param choice - переменная для выбора алгоритма
* \return Код ошибки (0 - успех).
*/
int main()
{
setlocale(LC_ALL, "Russian");

double valueA, valueB;
int choice;
cout << "Введите а - ";
cin >> valueA;
cout << "Введите b - ";
cin >> valueB;
cout << "выберите что вы хотите сделать с переменными \n 1.сложение\n 2. вычитание\n 3.умножение\n 4.деление\n";
cin >> choice;
const auto filling = static_cast<path>(choice);
switch (filling) {
case path::sum:
{
double rezult = addition( valueA, valueB);
cout<<rezult;
break;
}
case path::diff:
{
double rezult = difff(valueA,valueB);
cout<<rezult;
break;
}
case path::multiply:
{
double rezult = multiplication(valueA, valueB);
cout<<rezult;
break;
}
case path::chas:
{
double rezult = chass(valueA, valueB);
cout<<rezult;
break;
}
default:
cout << "Некоректный ввод.";
break;
}
}

double addition(double value1, double value2)
{
return value1+value2;
}

double difff(double value1, double value2)
{
return value1-value2;
}

double multiplication(double value1, double value2){
return value1*value2;
}

double chass(double value1, double value2){
return value1/value2;
}
