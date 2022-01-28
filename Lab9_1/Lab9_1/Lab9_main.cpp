#include "Vector.h"
#include <iostream>

using namespace std;
int main()
{
	int mas[] = { 1, 2, 3, 4 }; //������ ��� ������������� ��������� �������

	//�������������� ����
	try
	{
		Vector x(4, mas);		//������ �� ������� ���������
		cout << x;				//������ ������� �
		
		cout << "Vector length: " << x()<<endl;

		cout << "Vvedi nomer?";
		int i;
		cin >> i;
		//����� �������� � ������� i, ���� ����� ������ 3 ��� ������ 0, �� ������������ �������������� ��������
		cout << x[i] << endl;

		cout << "Vvedi skolko elementov udalit': ";
		int n;
		cin >> n;
		//�������� ��������� �� �������. ���� � ������� ������ ���������, �� ������������ �������������� ��������
		Vector y = x - n;
		cout << "New vector: ";
		cout << y;
		cout << "Vector length: " << y() << endl;

		cout << "Vvedi chislo dlya slozeniya: ";
		int a;
		cin >> a;
		//���������� ��������� � ������� �������� �������, ���� � ������� ��� ���������, �� ������������ �������������� ��������
		Vector z = y + a;

		cout << "New vector: ";
		cout << z;		
	}
	//���������� ����������
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
	}//��������� �� ������
	return 0;
}