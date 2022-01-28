#include "Time.h"
#include <iostream>
using namespace std;

//перегрузка операции присваивания
Time& Time::operator=(const Time& t)
{
	//проверка на самоприсваивание
	if (&t == this) return *this;
	min = t.min;
	sec = t.sec;
	return *this;
}

//перегрузка бинарной операции сложения
Time Time::operator+(const Time& t)
{
	int temp1 = min * 60 + sec;
	int temp2 = t.min * 60 + t.sec;
	Time p;
	p.min = (temp1 + temp2) / 60;
	p.sec = (temp1 + temp2) % 60;
	return p;
}

//перегрузка бинарной операции сравнения
bool Time::operator==(const Time& t)
{
	if (min == t.min && sec==t.sec)
		return true;
	return false;
}

//перегрузка глобальной функции-операции ввода
istream& operator>>(istream& in, Time& t)
{
	int min;
	int sec;
	cout << "min? "; in >> min;
	cout << "sec? "; in >> sec;

	//Учтем, что пользователь может ввести больше 60 сек
	sec = 60 * min + sec;
	t.min = sec / 60;
	t.sec = sec % 60;
	return in;
}

//перегрузка глобальной функции-операции вывода
ostream& operator<<(ostream&out, const Time&t)
{
	return (out << t.min << ":" << t.sec);
}