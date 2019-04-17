#include "Complex.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int operation;
	complexes A, B, C;
	setlocale(LC_ALL, "Russian");
	cout << "Введите действительную часть первого комплексного числа: ";
	A.put_complex_real();
	cout << "Введите мнимую часть первого комплексного числа: ";
	A.put_complex_im();
	cout << "Первое комплексное число: ";
	A.get_complex();
	cout << "\nВведите действительную часть второго комплексного числа: ";
	B.put_complex_real();
	cout << "Введите мнимую часть второго комплексного числа: ";
	B.put_complex_im();
	cout << "Второе комплексное число: ";
	B.get_complex();
	cout << "\nКакую операцию с числами выполнить? (выберите цифру)\n1 - сложение\n2 - вычитание\n3 - умножение\n4 - деление" << endl << endl;
	cin >> operation;
	switch (operation) {
	case 1: {
		cout << "Вы выбрали: сложение" << endl;
		add(&A, &B, &C); break; }
	case 2: {
		cout << "Вы выбрали: вычитание" << endl;
		sub(&A, &B, &C); break; }
	case 3: {
		cout << "Вы выбрали: умножение" << endl;
		mult(&A, &B, &C); break; }
	case 4: {
		cout << "Вы выбрали: деление" << endl;
		div(&A, &B, &C); break; }
	default: {
		cout << "Ошибка"; break; }
	}
	cout << "\nРезультат: ";
	C.get_complex();
	system("pause");
	return 0;
}