#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
	//Аттрибуты
	string fio;
	string group;
	float avg_score;

public:
	Student();							//Конструктор без параметров
	Student(string, string, float);		//Конструктор с параметрами
	Student(const Student&);			//Конструктор копирования
	~Student();							//Деструктор

	string get_fio();					//Селектор
	void set_fio(string);				//Модификатор

	string get_group();					//Селектор
	void set_group(string);				//Модификатор

	float get_avg_score();				//Селектор
	void set_avg_score(float);				//Модификатор

	void show();						//просмотр аттрибутов
};


