#include "Fraction.h"
#include <iostream>

using namespace std;

void Fraction::Init(double a, int b)
{
	first = a;
	second = b;
}

void Fraction::Read()
{
	cout << "first = "; cin >> first;
	cout << "second = "; cin >> second;
}

void Fraction::Show()
{
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}

int Fraction::Ipart()
{
	if (second != 0) {
		return first / second;
	}
	else
		cout << "delenie na 0" << endl;
}
