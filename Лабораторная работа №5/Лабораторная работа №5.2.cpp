#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Vector {
	double x, y;
public:
	Vector() {}
	Vector(double a, double b) :x(a), y(b) {}
	Vector(const Vector& f) {
		x = f.x;
		y = f.y;
	}

	double mod() {
		return sqrt(x * x + y * y);
	}
	Vector(const Vector& v, const Vector& g) {
		x = v.x + g.x;
		y = v.y + g.y;
	}
	void info() {
		cout << "(" << x << ", " << y << ")";
	}
	friend istream& operator>>(istream &cin, Vector &h) {
		cout << "x = ";
		cin >> h.x;
		cout << "y = ";
		cin >> h.y;
		return cin;
	}
	friend ostream& operator<<(ostream &cout, Vector &h) {
		cout << "(" << h.x << ", " << h.y << ")" << endl;
		return cout;
	}
	friend bool operator==(const Vector &n, const Vector &k) {
		if (n.x == k.x && n.y == k.y)
			return 1;
		else return 0;
	}
	friend const Vector operator+(const Vector &left, const Vector &right) {
		return Vector(left.x + right.x, left.y + right.y);
	}

	~Vector() {}
};



int main() {
	setlocale(LC_ALL, "Russian");

	cout << "2 вектора" << endl << endl;
	Vector a, b;
	cout << "Введите координаты векторов" << endl << endl;
	cout << "Вектор a" << endl;
	cin >> a;
	cout << endl << "Вектор b" << endl;
	cin >> b;
	Vector c;
	c = a + b;
	if (a == b) {
		cout << endl << "Векторы одинаковы" << endl << endl;
		cout << "Модуль векторов a и b = " << a.mod() << endl;
	}
	else {
		cout << endl << "Модуль вектора a = " << a.mod() << endl;
		cout << "Модуль вектора b = " << b.mod() << endl;
	}
	cout << "Координаты вектора с = a + b = " << c;
	cout << endl;
	_getch();
	return 0;
}