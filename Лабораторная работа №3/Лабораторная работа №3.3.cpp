#include <iostream>
#include <conio.h>
#include <string>
#include <math.h>

using namespace std;

class Complex {
public:
	double re, im;
	double modul() {
		return sqrt(re*re + im * im);
	}
	double arg() {
		return (atan(im / re))*180/3.14159265;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	Complex A[3];
	cout << "Введите комплексные числа" << endl << endl;
	for (int i = 0; i < 3; i++) {
		cout << "Действительная часть комлексного числа " << i + 1 << ": ";
		cin >> A[i].re;
		cout << "Мнимая часть комплексного числа " << i + 1 << ": ";
		cin >> A[i].im;
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 3; i++) {
		cout << "Модуль числа " << i + 1 << " = " << A[i].modul() << endl;
		cout << "Аргумент числа " << i + 1 << " = " << A[i].arg() << endl;
		cout << endl;
	}
	_getch();
	return 0;
}