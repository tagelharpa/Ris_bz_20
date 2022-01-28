#include "Pair.h"

Pair::Pair(void)
{
	first = 0;
	second = 0;
}

Pair::~Pair()
{
}

void Pair::Show()
{
	cout << "\nFirst = " << first;
	cout << "\nSecond = " << second << endl;
}

Pair::Pair(int _first, int _second)
{
	first = _first;
	second = _second;
}

Pair::Pair(const Pair& _pair)
{
	first = _pair.first;
	second = _pair.second;
}

int Pair::get_first()
{
	return first;
}

int Pair::get_second()
{
	return second;
}

void Pair::set_first(int _first)
{
	first = _first;
}

void Pair::set_second(int _second)
{
	second = _second;
}

Pair& Pair::operator=(const Pair&p)
{
	if (&p == this) return *this;
	first = p.first;
	second = p.second;

	return *this;
}

bool Pair::operator>(const Pair&p)
{
	if ((this->first > p.first) || (this->first == p.first && this->second > p.second)) {
		return true;
	}
	else return false;
}

bool Pair::operator<(const Pair& p)
{
	if ((p.first > this->first) || (p.first == this->first && p.second > this->second)) return true;
	else return false;
}

bool Pair::operator==(const Pair& p)
{
	if (this->first == p.first && this->second == p.second) return true;
	else return false;
}

bool Pair::operator!=(const Pair& p)
{
	if (this->first != p.first || this->second != p.second) return true;
	else return false;
}

istream& operator>>(istream& in, Pair& p)
{
	cout << "First = "; in >> p.first;
	cout << "Second = "; in >> p.second;

	return in;
}

ostream& operator<<(ostream& out, const Pair& p)
{
	out << "First = " << p.first;
	out << "\nSecond = " << p.second << endl;

	return out;
}
