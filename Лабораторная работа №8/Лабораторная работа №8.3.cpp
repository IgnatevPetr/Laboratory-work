#include <iostream>
#include <conio.h>
#include <queue>
#include <string>
#include <windows.h>

using namespace std;

class Auto {
public:
	string brand;
	string number;
	void put_info() {
		cout << "Введите марку авто: ";
		getline(cin, brand);
		cout << "Введите номер авто: ";
		getline(cin, number);
		cout << endl;
	}
	void get_info() {
		cout << "Авто" << endl;
		cout << "Марка: " << brand << endl;
		cout << "Номер: " << number << endl << endl;
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	queue<Auto> a;
	cout << "Введите автомобили в очереди" << endl << endl;
	for (int i = 0; i < 3; i++) {
		Auto b;
		b.put_info();
		a.push(b);
	}
	cout << endl;
	cout << "Кол-во автомобилей в очереди: " << a.size() << endl << endl;
	cout << "Автомобили в очереди:" << endl << endl;
	while (!a.empty()) {
		Auto b = a.front();
		b.get_info();
		a.pop();
	}

	_getch();
	return 0;
}