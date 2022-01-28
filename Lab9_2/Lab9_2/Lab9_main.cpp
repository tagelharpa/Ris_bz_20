#include "Vector.h"
#include "error.h"
#include <iostream>

using namespace std;
int main()
{
	int mas[] = { 1, 2, 3, 4 }; //массив для инициализации элементов вектора

	//контролируемый блок
	try
	{
		Vector x(4, mas);		//вектор из четырех элементов
		cout << x;				//печать вектора х

		cout << "Vector length: " << x() << endl;

		cout << "Vvedi nomer?";
		int i;
		cin >> i;
		//вывод элемента с номером i, если номер больше 3 или меньше 0, то генерируется исключительная ситуация
		cout << x[i] << endl;

		cout << "Vvedi skolko elementov udalit': ";
		int n;
		cin >> n;
		//Удаление элементов из вектора. Если в векторе меньше элементов, то генерируется исключительная ситуация
		Vector y = x - n;
		cout << "New vector: ";
		cout << y;
		cout << "Vector length: " << y() << endl;

		cout << "Vvedi chislo dlya slozeniya: ";
		int a;
		cin >> a;
		//добавление константы к каждому элементу вектора, если в векторе нет элементов, то генерируется исключительная ситуация
		Vector z = y + a;

		cout << "New vector: ";
		cout << z;
	}
	//обработчик исключения
	catch (error e)
	{
		e.what();
	}	
	return 0;
}