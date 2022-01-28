#pragma once
#include "Pair.h"
#include <iostream>
#include <string>

using namespace std;

class Fraction : public Pair
{
public:

	//������������
	Fraction(void);
	Fraction(int, int);
	Fraction(const Fraction&);

	//����������
	virtual ~Fraction(void);

	void Show();

	Fraction& operator=(const Fraction&);
	friend istream& operator>>(istream& in, Fraction& p);
	friend ostream& operator<<(ostream& out, const Fraction& p);

	bool operator>(const Fraction&);
	bool operator<(const Fraction&);
};