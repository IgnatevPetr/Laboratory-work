#include <iostream>
#include <conio.h>
#include <string>
#include <math.h>

using namespace std;

class Complex {
	double re, im;
public:
	Complex(double a, double b) :re(a), im(b) {}
	Complex() {}
	Complex(const Complex&) {}
	~Complex() {}
	friend istream& operator>>(istream &cin, Complex &h) {
		cout << "Действительная часть комлексного числа: ";
		cin >> h.re;
		cout << "Мнимая часть комплексного числа: ";
		cin >> h.im;
		cout << endl;
		return cin;
	}
	friend ostream& operator<<(ostream &cout, Complex &h) {
		cout << h.re << " + i*(" << h.im << ")" << endl;
		cout << endl;
		return cout;
	}
	friend bool operator==(const Complex &n, const Complex &k) {
		if (n.re == k.re && n.im == k.im)
			return 1;
		else return 0;
	}
	friend const Complex operator++(Complex &f, int) {
		Complex oldValue(f.re, f.im);
		f.re++;
		return oldValue;
	}
	friend const Complex operator--(Complex &f, int) {
		Complex oldValue(f.re, f.im);
		f.re--;
		return oldValue;
	}
	friend const Complex operator+(const Complex &left, const Complex &right) {
		return Complex(left.re + right.re, left.im + right.im);
	}
	double modul() {
		return sqrt(re*re + im * im);
	}
	double arg() {
		return (atan(im / re)) * 180 / 3.14159265;
	}
};

void comp(Complex &a, Complex &b, Complex &c) {
	if (a == b && b == c)
		cout << "Все комплексные числа одинаковы" << endl << endl;
	else if (a == b)
		cout << "Первое и второе комплексное число одинаковы" << endl << endl;
	else if (b == c)
		cout << "Второе и третье комплексное число одинаковы" << endl << endl;
	else if (a == c)
		cout << "Первое и третье комплексное число одинаковы" << endl << endl;
}
void modarg(Complex &a) {
	cout << "Модуль числа = " << a.modul() << endl;
	cout << "Аргумент числа = " << a.arg() << endl;
	cout << endl;
}

void inc(Complex &a) {
	cout << "Инкремент первого комплексного числа: ";
	a++;
	cout << a;
}

void dec(Complex &a) {
	cout << "Декремент второго комплексного числа: ";
	a--;
	cout << a;
}

void add(Complex &a, Complex &b) {
	Complex Res;
	Res = a + b;
	cout << "Сложение первого и второго комплексного числа: " << Res;
}

int main() {
	setlocale(LC_ALL, "Russian");
	Complex A[3];
	cout << "Введите комплексные числа" << endl << endl;
	for (int i = 0; i < 3; i++) {
		cin >> A[i];
		modarg(A[i]);
		cout << endl;
	}
	comp(A[0], A[1], A[2]);
	inc(A[0]);
	dec(A[1]);
	add(A[0], A[1]);
	_getch();
	return 0;
}