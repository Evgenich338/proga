#include <iostream>
using namespace std;

/**
* \brief сложение
*\ param value1 переменная вводимая пользователем
*\ param value2 переменная вводимая пользователем
*/
void sum(double value1, double value2);

/**
* \brief вычитание
*\ param value1 переменная вводимая пользователем
*\ param value2 переменная вводимая пользователем
*/
void difff(double value1, double value2);

/**
* \brief умножение
*\ param value1 переменная вводимая пользователем
*\ param value2 переменная вводимая пользователем
*/
void proizv(double value1, double value2);

/**
* \brief деление
*\ param value1 переменная вводимая пользователем
*\ param value2 переменная вводимая пользователем
*/
void chass(double value1, double value2);

enum path
{
Sum = 1,
diff = 2,
proiz = 3,
chas = 4
};

/**
* \brief Точка входа в программу.
* \param value1 - переменная 1
* \param value2 - переменная 2
* \param choice - переменная для выбора алгоритма
* \return Код ошибки (0 - успех).
*/
int main()
{
setlocale(LC_ALL, "Russian");

double value1, value2
int choice;
cout << "Введите а - ";
cin >> value1;
cout << "Введите b - ";
cin >> value2;
cout << "выберите что вы хотите сделать с переменными \n 1.сложение\n 2. вычитание\n 3.умножение\n 4.деление\n";
cin >> choice;
const auto filling = static_cast<path>(choice);
switch (filling) {
case path::Sum:
{
sum( value1, value2);
break;
}
case path::diff:
{
difff(value1,value2);
break;
}
case path::proiz:
{
proizv(value1, value2);
break;
}
case path::chas:
{
chass(value1, value2);
break;
}
default:
cout << "Некоректный ввод.";
break;
}
}

void sum(double value1, double value2)
{
cout<<value1+value2;
}

void difff(double value1, double value2)
{
cout<<value1-value2;
}

void proizv(double value1, double value2){
cout<<value1*value2;
}

void chass(double value1, double value2){
cout<<value1/value2;
}
