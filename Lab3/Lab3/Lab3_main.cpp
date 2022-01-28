#include "Time.h"
#include <iostream>

using namespace std;
int main()
{
	Time a;//конструктор без параметров
	Time b; //конструктор без параметров
	Time c; //конструктор без параметров
	cin >> a;//ввод переменной
	cin >> b;//ввод переменной
	
	c = a + b;//сложение
	cout << "a=" << a << endl; //вывод переменной
	cout << "b=" << b << endl; //вывод переменной
	cout << "c=" << c << endl; //вывод переменной

	//сравнение временных интервалов
	if (a == b)
		cout << "a==b" << endl;
	else
		cout << "a!=b" << endl;

	return 0;
}
