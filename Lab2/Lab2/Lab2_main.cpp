#include "Student.h"
#include <iostream>

using namespace std;

//������� ��� �������� ������� Student
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

 //������� ��� �������� ������� ��� ���������
void print_Student(Student S)
{
	S.show();
}
int main()
{
	//����������� ��� ����������
	Student s1;
	s1.show();
	//���������� � �����������
	Student s2("Ivanov Ivan Ivanovich", "P-100", 4.5);
	s2.show();
	//����������� �����������
	Student s3 = s2;
	s3.set_fio("Petrov Petr Sergeevich");
	s3.set_group("P-101");
	s3.set_avg_score(5.0);
	//����������� �����������
	print_Student(s3);
	//����������� �����������
	s1 = make_Student();
	s1.show();

	return 0;
}
