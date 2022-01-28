#include "Vector.h"
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
		
		cout << "Vector length: " << x()<<endl;

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
	catch (int ex)
	{
		switch (ex)
		{
			case 1:
				cout << "ERROR!!! Vector length can't be more than MAXSIZE\n";
				break;
			case 2:
				cout << "ERROR!!! Index can't be negative\n";
				break;
			case 3:
				cout << "ERROR!!! Index can't be more than vector size\n";
				break;
			case 4:
				cout << "ERROR!!! Vector is empty\n";
				break;
			case 5:
				cout << "ERROR!!! The number is more then vector size\n";
				break;
		default:
			cout << "ERROR!!!" << endl;
			break;
		}		
	}//сообщение об ошибке
	return 0;
}