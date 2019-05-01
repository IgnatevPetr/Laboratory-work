#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Tiles {
public:
	string brand;
	int size_h, size_w, price;
	void getData() {
		cout << "Плитка " << brand << " " << size_h << " x " << size_w << " см. (" << price << " руб./шт.)" << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	Tiles Til[3];
	cout << "Введите информацию о плитках кафеля разных брендов" << endl << endl;
	for (int i = 0; i < 3; i++) {
		cout << "Плитка " << i + 1 << endl;
		cout << "Бренд: ";
		getline(cin, Til[i].brand);
		cout << "Высота: ";
		cin >> Til[i].size_h;
		cout << "Ширина: ";
		cin >> Til[i].size_w;
		cout << "Цена: ";
		cin >> Til[i].price;
		cout << endl;
		cin.ignore();
	}
	for (int i = 0; i < 3; i++)
		Til[i].getData();
	_getch();
	return 0;
}
