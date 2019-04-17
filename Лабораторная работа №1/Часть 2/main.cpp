#include "Complex.h"
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int n;
	double max = 0, rea, imp;
	complexes *p;
	ifstream in("C:\\Users\\MMI\\Desktop\\complex.txt");
	if (!in.is_open()) {
		cerr << "Ошибка: файл complex.txt не открывается." << endl;
		system("pause");
		return 1;
	}
	else in >> n;
	p = new complexes[n];
	for (int i = 0; i < n; i++) {
		in >> p[i].re;
		in >> p[i].im;
	}
	for (int i = 0; i < n; i++)
		if (p[i].modul() > max) {
			max = p[i].modul();
			rea = p[i].re;
			imp = p[i].im;
		}
	cout << "Комплексное число с максимальным модулем: " << rea << " + i*(" << imp << ")" << endl;
	cout << "Максимальный модуль комплексного числа : " << max << endl;
	in.close();
	delete[] p;
	system("pause");
	return 0;
}