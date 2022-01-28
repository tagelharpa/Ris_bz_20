#include <iostream>
#include "Vector.h"
#include "Time.h"

int main()
{
	Time t;
	cin >> t;
	cout << t;
	//инициализация, ввод и вывод значений вектора
	Vector<Time>A(5, t);
	cin >> A;
	cout << A << endl;

	//инициализация и вывод значений вектора
	Vector <Time>B(10, t);
	cout << B << endl;

	//операция присваивания
	B = A;
	cout << B << endl;

	//доступ по индексу
	cout << A[2] << endl;

	//получение длины вектора
	cout << "size=" << A() << endl;

	//операция сложения с константой
	B = A + t;
	cout << B << endl;

	return 0;
}
