#pragma once
#include "Pair.h"
#include <iostream>
#include <string>

using namespace std;

class Fraction : public Pair
{
public:

	//Конструкторы
	Fraction(void);
	Fraction(int, int);
	Fraction(const Fraction&);

	//Деструктор
	virtual ~Fraction(void);

	friend istream& operator>>(istream& in, Fraction& p);
	friend ostream& operator<<(ostream& out, const Fraction& p);

	bool operator>(const Fraction&);
	bool operator<(const Fraction&);
};