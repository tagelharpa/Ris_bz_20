#pragma once
#include "Object.h"
#include <string>
#include <iostream>
using namespace std;
class Pair : public Object
{
public:

#pragma region ������������
	Pair(void);
	Pair(int, int);
	Pair(const Pair&);
#pragma endregion
	
	//����������
	virtual ~Pair(void);

	void Show();

	//���������
	int get_first();
	int get_second();

	//��������
	void set_first(int);
	void set_second(int);

#pragma region ���������
	Pair& operator=(const Pair&);
	friend istream& operator>>(istream& in, Pair& p);
	friend ostream& operator<<(ostream& out, const Pair& p);

	bool operator>(const Pair& p);
	bool operator<(const Pair& p);
	bool operator==(const Pair& p);
	bool operator!=(const Pair& p);
#pragma endregion

protected:
	//���� ������
	int first;
	int second;
;};