#include <iostream>
#include <conio.h>
#include <sstream>
#include <windows.h>

using namespace std;

class Animal {
protected:
	int len;
	string sound;
	int speed;
	string wool;
public:
	void put_info() {
		cout << "Введите длину: ";
		cin >> len;
		cin.ignore();
		cout << "Введите звук, который издает: ";
		getline(cin, sound);
		cout << "Введите скорость: ";
		cin >> speed;
		cin.ignore();
		cout << "Введите тип шерсти: ";
		getline(cin, wool);
	}
	void get_info() {
		cout << "Длина: " << len << " см" << endl;
		cout << "Звук: " << sound << endl;
		cout << "Скорость: " << speed << " км/ч" << endl;
		cout << "Тип шерсти: " << wool << endl;
	}
};

class Cat :Animal {
private:
	string breed;
	string mouse;
public:
	void put_info_cat() {
		cout << "Введите породу кошки: ";
		getline(cin, breed);
		put_info();
		cout << "Любит мышей?: ";
		getline(cin, mouse);
	}
	void get_info_cat() {
		cout << "Порода кошки: " << breed << endl;
		get_info();
		cout << "Мыши: " << mouse << endl;
	}
};

class Dog :Animal {
private:
	string breed;
	string walk;
public:
	void put_info_dog() {
		cout << "Введите породу собаки: ";
		getline(cin, breed);
		put_info();
		cout << "Как часто просится на прогулку?: ";
		getline(cin, walk);
	}
	void get_info_dog() {
		cout << "Порода собаки: " << breed << endl;
		get_info();
		cout << "Прогулка: " << walk << endl;
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Cat a;
	Dog b;
	a.put_info_cat();
	cout << endl;
	b.put_info_dog();
	cout << endl << endl;
	a.get_info_cat();
	cout << endl;
	b.get_info_dog();

	_getch();
	return 0;
}