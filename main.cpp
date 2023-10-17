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

	cout << "\t\t\t\tОперации с числителем и знаменателем\n\n";
	cout << "Введите числитель и знаменатель через пробел\n";

	cin >> drob.num1 >> drob.num2;

	cout << "\nВыберите действие с переменными:\n\n[1]-Сложение\n[2]-Вычетание\n[3]-Деление\n[4]-Умножение\nВаш выбор ";
	cin >> vib;

	cout << endl;

	switch (vib) {
	case 1:cout <<"Ваш ответ: " << drob.add(drob.num1, drob.num2);break;
	case 2:cout << "Ваш ответ: " << drob.min(drob.num1, drob.num2);break;
	case 3:cout << "Ваш ответ: " << drob.del(drob.num1, drob.num2);break;
	case 4:cout << "Ваш ответ: " << drob.umn(drob.num1, drob.num2);break;
	default: cout<<"Неверный ввод";
	}

}