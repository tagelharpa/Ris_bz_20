#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
	//���������
	string fio;
	string group;
	float avg_score;

public:
	Student();							//����������� ��� ����������
	Student(string, string, float);		//����������� � �����������
	Student(const Student&);			//����������� �����������
	~Student();							//����������

	string get_fio();					//��������
	void set_fio(string);				//�����������

	string get_group();					//��������
	void set_group(string);				//�����������

	float get_avg_score();				//��������
	void set_avg_score(float);				//�����������

	void show();						//�������� ����������
};


