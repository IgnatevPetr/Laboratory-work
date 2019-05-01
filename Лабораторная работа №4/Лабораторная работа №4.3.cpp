#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Tiles {
	string brand;
	int size_h, size_w, price;
public:
	Tiles() {}
	Tiles(string a, int b, int c, int d):brand(a),size_h(b),size_w(c),price(d) {}
	void getData() {
		cout << "Плитка " << brand << " " << size_h << " x " << size_w << " см. (" << price << " руб./шт.)" << endl;
	}
	~Tiles() {}
};

int main() {
	setlocale(LC_ALL, "Russian");

	Tiles Til[3];
	string a;
	int b, c, d;
	cout << "Введите информацию о плитках кафеля разных брендов" << endl << endl;
	for (int i = 0; i < 3; i++) {
		cout << "Плитка " << i + 1 << endl;
		cout << "Бренд: ";
		getline(cin, a);
		cout << "Высота: ";
		cin >> b;
		cout << "Ширина: ";
		cin >> c;
		cout << "Цена: ";
		cin >> d;
		Tiles g(a, b, c, d);
		Til[i] = g;
		cout << endl;
		cin.ignore();
	}
	for (int i = 0; i < 3; i++)
		Til[i].getData();
	_getch();
	return 0;
}
