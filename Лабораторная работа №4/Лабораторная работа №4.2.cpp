#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Vector {
	double x, y;
public:
	Vector(double a, double b) :x(a), y(b) {}
	Vector(const Vector& f){
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

	~Vector(){}
};



int main() {
	setlocale(LC_ALL, "Russian");

	cout << "\t\t\t2 вектора" << endl << endl;
	double x, y;
	cout << "\t\t\tВведите координаты векторов" << endl << endl;
	cout << "\t\t\tВектор a" << endl;
	cout << "\t\t\tx = ";
	cin >> x;
	cout << "\t\t\ty = ";
	cin >> y;
	Vector a(x, y);
	cout << endl << "\t\t\tВектор b" << endl;
	cout << "\t\t\tx = ";
	cin >> x;
	cout << "\t\t\ty = ";
	cin >> y;
	Vector b(x, y);
	Vector c(a, b);
	cout << endl << "\t\t\tМодуль вектора a = " << a.mod() << endl;
	cout << "\t\t\tМодуль вектора b = " << b.mod() << endl;
	cout << "\t\t\tКоординаты вектора с = a + b = ";
	c.info();
	cout << endl;
	_getch();
	return 0;
}