#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief вычисление функции по заданной формуле
* \param value1 - входное значение x
* \param value2 - входное значение y
* \return результат
*/
void chek(double value1,double value2);


/**
* \brief Точка входа в программу
* \param value1 - входное значение x
* \param value2 - входное значение y
* \return Код ошибки (0-успех)
*/

int main()
{
setlocale(LC_ALL, "Russian");
cout << "Введите x и у";
double value1,value2;
cin >> value1>>value2;
chek(value1,value2);
return 0;
}


void chek(double value1,double value2)
{

if (value1 < value2){
    value2 = (value1 + value2) / 2;
    value1 = (value1 * value2) * 2;
    cout << "x = " << value1 << "\n y = "<<value2;
} else if(value1>value2) {
    value1 = (value1 + value2) / 2;
    value2 = (value1 * value2) * 2;
    cout << "x = " << value1 << "\n y = "<<value2;
} else if (value2==value1){
    cout<<"Числа равны, противоречие условию!";
}
}
