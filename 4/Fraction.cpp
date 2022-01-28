#include "Fraction.h"

Fraction::Fraction(void) : Pair()
{
}

Fraction::~Fraction()
{
}

Fraction::Fraction(int _first, int _second) : Pair(_first, _second)
{
}

Fraction::Fraction(const Fraction& _fraction)
{
	first = _fraction.first;
	second = _fraction.second;
}

bool Fraction::operator>(const Fraction& p)
{
	int d1 = first * p.second;
	int d2 = second * p.first;

	if (d1 > d2) return true;
	else return false;
}

bool Fraction::operator<(const Fraction& p)
{
	int d1 = first * p.second;
	int d2 = second * p.first;

	if (d1 < d2) return true;
	else return false;
}

istream& operator>>(istream& in, Fraction& p)
{
	cout << "Numerator = "; in >> p.first;
	cout << "Denominator = "; in >> p.second;
	return in;
}

ostream& operator<<(ostream& out, const Fraction& p)
{
	out << "Numerator = " << p.first;
	out << "\nDenominator = " << p.second << endl;
	return out;
}
