#include "Vector.h"
#include "error.h"
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

		cout << "Vector length: " << x() << endl;

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
	catch (error e)
	{
		e.what();
	}	
	return 0;
}