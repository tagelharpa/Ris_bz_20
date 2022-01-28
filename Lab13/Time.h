#pragma once
#include <iostream>

using namespace std;

class Time
{
	//Поля
	int min, sec;

public:
	//Конструкторы
	Time() { min = 0; sec = 0; }
	Time(int m, int s) { min = m; sec = s; }
	Time(const Time& t) { min = t.min; sec = t.sec; }

	//Деструктор
	~Time() {};

	//Селекторы
	int get_min() { return min; }
	int get_sec() { return sec; }

	//Модификаторы
	void set_min(int m) { min = m; }
	void set_sec(int s) { sec = s; }

	//Операторы
	Time& operator=(const Time&t) {
		if (&t == this) return *this;
		min = t.min;
		sec = t.sec;
		return *this;
	}
	friend istream& operator>>(istream& in, Time& t) {
		cout << "min = "; in >> t.min;
		cout << "sec = "; in >> t.sec;
		return in;
	}
	friend ostream& operator<<(ostream& out, const Time& t) {
		return (out << t.min << ":" << t.sec);
	}

	bool operator < (const Time& t) {
		if (min < t.min) return true;
		if (min == t.min && sec < t.sec) return true;
		return false;
	}

	bool operator > (const Time& t) {
		if (min > t.min) return true;
		if (min == t.min && sec > t.sec) return true;
		return false;
	}

	bool operator == (const Time& t) {
		if (min == t.min && sec == t.sec) return true;
		return false;
	}

	Time operator + (const Time& t) {
		int temp1 = min * 60 + sec;
		int temp2 = t.min * 60 + t.sec;
		Time p;
		p.min = (temp1 + temp2) / 60;
		p.sec = (temp1 + temp2) % 60;

		return p;
	}

	Time operator / (const Time& t) {
		int temp1 = min * 60 + sec;
		int temp2 = t.min * 60 + t.sec;
		Time p;
		p.min = (temp1 / temp2) / 60;
		p.sec = (temp1 / temp2) % 60;

		return p;
	}

	Time operator / (const int&t) {
		int temp1 = min * 60 + sec;

		Time p;
		p.min = (temp1 / t) / 60;
		p.sec = (temp1 / t) % 60;

		return p;
	}
};

