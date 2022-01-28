#include "Student.h"
#include <iostream>

using namespace std;

//Функция для создания объекта Student
Student make_Student()
{
	char f[256];
	string g;
	float s;

	cout << "Vvedite FIO: ";
	cin.getline(f, 256);

	cout << "Vvedite group: ";
	cin >> g;

	cout << "Vvedite sredniy bal: ";
	cin >> s;

	Student S(f, g, s);
	return S;
}

 //Функция для передачи объекта как параметра
void print_Student(Student S)
{
	S.show();
}
int main()
{
	//конструктор без параметров
	Student s1;
	s1.show();
	//коструктор с параметрами
	Student s2("Ivanov Ivan Ivanovich", "P-100", 4.5);
	s2.show();
	//конструктор копирования
	Student s3 = s2;
	s3.set_fio("Petrov Petr Sergeevich");
	s3.set_group("P-101");
	s3.set_avg_score(5.0);
	//конструктор копирования
	print_Student(s3);
	//конструктор копирования
	s1 = make_Student();
	s1.show();

	return 0;
}
