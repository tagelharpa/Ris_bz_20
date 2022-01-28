#include "Student.h"

using namespace std;

//����������� ��� ����������
Student::Student()
{
	fio = "";
	group = "";
	avg_score = 0;
	cout << "Constructor bez parametrov dlia objecta " << this << endl;
}

//���������� � �����������
Student::Student(string f, string g, float s)
{
	fio = f;
	group = g;
	avg_score = s;
	cout << "Constructor s parametrami dlia objecta " << this << endl;
}

//����������� �����������
Student::Student(const Student& S)
{
	fio = S.fio;
	group = S.group;
	avg_score = S.avg_score;
	cout << "Constructor copirovania dlia objecta " << this << endl;
}

//����������
Student::~Student()
{
	cout << "Destructor dlia objecta " << this << endl;
}

//���������
string Student::get_fio()
{
	return fio;
}
string Student::get_group()
{
	return group;
}
float Student::get_avg_score()
{
	return avg_score;
}

//������������
void Student::set_fio(string f)
{
	fio = f;
}
void Student::set_group(string g)
{
	group = g;
}
void Student::set_avg_score(float s)
{
	avg_score = s;
}

//����� ��� ��������� ����������
void Student::show()
{
	cout << "FIO: " << fio << endl;
	cout << "Group: " << group << endl;
	cout << "Sredniy bal: " << avg_score << endl;
}