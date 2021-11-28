#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>

using namespace std;

/**
* \brief Заполнение массива случайными числами
* \param array Массив
* \param size Размер массива
* \param LOW_BOUND Минимально возможное число
* \param UP_BOUND Максимально возможное число
**/
void RandomDigits(int* array, const size_t  size, const int LOW_BOUND, const int UP_BOUND);

/**
* \brief Ввод массива с клавиатуры
* \param array Массив
* \param size Размер массива
**/
void UserInput(int* array, const size_t  size);

/**
* \brief Вывод массива
* \param array Массив
* \param size Размер массива
**/
void Print(int* array, const size_t size);

/**
* \brief Сумма четных элементов массива.
* \param array Массив
* \param size Размер массива
* \param return Значение суммы
**/
int GetSumEvenNumbers(int* array, const size_t size);

/**
* \brief Подсчитать количество элементов массива, значения которых состоят из двух цифр
* \param array Массив
* \param size Размер массива
**/
void count_digit_numbers(int* array, const size_t size);

/**
* \brief Заменить последний отрицательный элемент массива на модуль первого элемента массива
* \param array Массив
* \param size Размер массива
**/
void SwapNumbers(int* array, const size_t size);

/**
* \brief Выбор заполнеия массива
**/
enum class Filling
{
	RANDOM = 1,
	USER = 2
};


/**
* \brief Точка входа в программу
* \return Код ошибки (0-успех)
**/
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int LOW_BOUND = -1000, UP_BOUND = 1000;

	cout << "Введите количество элементов массива: ";
	int* array;
	int size;
	cin >> size;

	array = new int[size];
	cout << "1 - Сгенерировать массив\n2 - Заполнить массив вручную\n";
	int choice;
	cin >> choice;

	const auto filling = static_cast<Filling>(choice);
	switch (filling)
	{
	case Filling::RANDOM:
		RandomDigits(array, size, LOW_BOUND, UP_BOUND);
		Print(array, size);
		break;
	case Filling::USER:
		UserInput(array, size);
		Print(array, size);
		break;
	default:
		cout << "Ошибка! Не выбран ни один из вариантов";
	}
    int rezult = GetSumEvenNumbers(array, size);
	cout << "Найти сумму четных элементов" << rezult<< "\n\n";

	cout << "Подсчитать количество элементов массива, значения которых состоят из двух цифр\n";
	count_digit_numbers(array, size);

	cout << "Заменить последний отрицательный элемент массива на модуль первого элемента массива\n";
	SwapNumbers(array, size);

	if (array != nullptr)
	{
		delete[] array;
		array = nullptr;
	};

	return 0;
}

void RandomDigits(int* array, const size_t  size, const int LOW_BOUND, const int UP_BOUND) {
	for (size_t i = 0; i < size; i++) {
		array[i] = rand() % (2 * UP_BOUND + 1) + LOW_BOUND;
	}
}

void UserInput(int* array, const size_t  size) {
	for (size_t i = 0; i < size; i++) {
		cout << "arr[" << i << "] = ";
		cin >> array[i];
	}
}

void Print(int* array, const size_t size) {
	cout << "array[" << size << "]" << "= {";
	for (size_t i = 0; i < size - 1; i++) {
		cout << array[i] << ";" << setw(3);
	}
	cout << array[size - 1] << "}\n\n";
}

int GetSumEvenNumbers(int* array, const size_t size) {
	int sum = 0;
	for (size_t i = 0; i < size; i++) {
		if (abs(array[i])%2 == 0) {
			sum += array[i];
		}
	}
	return sum;
}

void count_digit_numbers(int* array, const size_t size) {
	int score = 0;
	for (size_t i = 0; i < size; i++) {
		if (abs(array[i])>10 && abs(array[i])<100) {
			score++;
		}
	}
	cout << score << "\n";

}

void SwapNumbers(int* array, const size_t size) {

	for (size_t i = 1; i < size; i++) {
		if (array[i]<0) {
			array[1] = abs(array[i]);
		}
	}
	for (size_t i = 1; i < size; i++) {
        cout<<array[i]<<" ";
	}
}
