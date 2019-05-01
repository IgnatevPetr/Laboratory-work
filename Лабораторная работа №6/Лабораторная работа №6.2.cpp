#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>

using namespace std;

class Alive {
protected:
	int len;
	string color;
	int speed;
public:
	void put_info() {
		cout << "Введите окрас: ";
		getline(cin, color);
		cout << "Введите длину: ";
		cin >> len;
		cin.ignore();
		cout << "Введите скорость: ";
		cin >> speed;
		cin.ignore();
	}
	void get_info() {
		cout << "Окрас: " << color << endl;
		cout << "Длина: " << len << " см." << endl;
		cout << "Скорость: " << speed << " км/ч" << endl;
	}
};

class Bird :Alive {
private:
	string name;
	int max_height;
public:
	void put_info_bird() {
		cout << "Введите название птицы: ";
		getline(cin, name);
		put_info();
		cout << "Введите максимальную высоту полёта: ";
		cin >> max_height;
		cin.ignore();
	}
	void get_info_bird() {
		cout << "Птица: " << name << endl;
		get_info();
		cout << "Макс. высота: " << max_height << " м." << endl;
	}
};

class Fish :Alive {
private:
	string name;
	string type;
public:
	void put_info_fish() {
		cout << "Введите название рыбы: ";
		getline(cin, name);
		put_info();
		cout << "Введите тип воды, в которой обитает: ";
		getline(cin, type);
	}
	void get_info_fish() {
		cout << "Рыба: " << name << endl;
		get_info();
		cout << "Тип воды: " << type << endl;
	}
};

class Animal :Alive {
private:
	string name;
	int legs;
	string tail;
public:
	void put_info_animal() {
		cout << "Введите название животного: ";
		getline(cin, name);
		put_info();
		cout << "Введите наличие хвоста: ";
		getline(cin, tail);
		cout << "Введите кол-во ног: ";
		cin >> legs;
		cin.ignore();
	}
	void get_info_animal() {
		cout << "Животное: " << name << endl;
		get_info();
		cout << "Наличие хвоста: " << tail << endl;
		cout << "Количество ног: " << legs << endl;
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Bird a;
	Fish b;
	Animal c;
	a.put_info_bird();
	cout << endl;
	b.put_info_fish();
	cout << endl;
	c.put_info_animal();
	cout << endl << endl;
	a.get_info_bird();
	cout << endl;
	b.get_info_fish();
	cout << endl;
	c.get_info_animal();

	_getch();
	return 0;
}