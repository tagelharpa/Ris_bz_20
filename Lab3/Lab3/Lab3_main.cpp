#include "Time.h"
#include <iostream>

using namespace std;
int main()
{
	Time a;//����������� ��� ����������
	Time b; //����������� ��� ����������
	Time c; //����������� ��� ����������
	cin >> a;//���� ����������
	cin >> b;//���� ����������
	
	c = a + b;//��������
	cout << "a=" << a << endl; //����� ����������
	cout << "b=" << b << endl; //����� ����������
	cout << "c=" << c << endl; //����� ����������

	//��������� ��������� ����������
	if (a == b)
		cout << "a==b" << endl;
	else
		cout << "a!=b" << endl;

	return 0;
}
