#pragma once
class Object
{
public:
	//Конструктор
	Object(void);
	//Деструктор
	~Object(void);

	//Метод для отображения атрибутов
	virtual void Show() = 0;
};