#pragma once
#include "Object.h"
#include <string>
#include <iostream>
using namespace std;
class Pair : public Object
{
public:

#pragma region Конструкторы
	Pair(void);
	Pair(int, int);
	Pair(const Pair&);
#pragma endregion
	
	//Деструктор
	virtual ~Pair(void);

	void Show();

	//Аксессоры
	int get_first();
	int get_second();

	//Мутаторы
	void set_first(int);
	void set_second(int);

#pragma region Операторы
	Pair& operator=(const Pair&);
	friend istream& operator>>(istream& in, Pair& p);
	friend ostream& operator<<(ostream& out, const Pair& p);

	bool operator>(const Pair& p);
	bool operator<(const Pair& p);
	bool operator==(const Pair& p);
	bool operator!=(const Pair& p);
#pragma endregion

protected:
	//Поля класса
	int first;
	int second;
;};