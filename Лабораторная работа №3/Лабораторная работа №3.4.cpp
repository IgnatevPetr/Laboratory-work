#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Vector {
public:
	double x, y;
	Vector(double a, double b) :x(a), y(b) {}
	double mod() {
		return sqrt(x * x + y * y);
	}
};

double sumx(Vector &v, Vector &g) {
	return v.x + g.x;
}

double sumy(Vector &v, Vector &g) {
	return v.y + g.y;
}


int main() {
	setlocale(LC_ALL, "Russian");

	cout << "\t\t\t2 вектора" << endl << endl;
	double x, y;
	cout << "\t\t\tВведите координаты векторов" << endl << endl;
	cout << "\t\t\tВектор a" << endl;
	cout << "\t\t\tx = " ;
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
	cout << endl << "\t\t\tМодуль вектора a = " << a.mod() << endl;
	cout << "\t\t\tМодуль вектора b = " << b.mod() << endl;
	cout << "\t\t\tКоординаты вектора с = a + b = (" << sumx(a, b) << ", " << sumy(a, b) << ")" << endl;
	_getch();
	return 0;
}