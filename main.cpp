#include <iostream>
#include <conio.h>
#include <iomanip>
#include "drob.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	Drob drob;
	int vib;

	cout << "\t\t\t\t�������� � ���������� � ������������\n\n";
	cout << "������� ��������� � ����������� ����� ������\n";

	cin >> drob.num1 >> drob.num2;

	cout << "\n�������� �������� � �����������:\n\n[1]-��������\n[2]-���������\n[3]-�������\n[4]-���������\n��� ����� ";
	cin >> vib;

	cout << endl;

	switch (vib) {
	case 1:cout <<"��� �����: " << drob.add(drob.num1, drob.num2);break;
	case 2:cout << "��� �����: " << drob.min(drob.num1, drob.num2);break;
	case 3:cout << "��� �����: " << drob.del(drob.num1, drob.num2);break;
	case 4:cout << "��� �����: " << drob.umn(drob.num1, drob.num2);break;
	default: cout<<"�������� ����";
	}

}