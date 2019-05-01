#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

class Child {
private:
	string name;
	string surname;
	int age;
public:
	void put_info() {
		cout << "Имя: ";
		getline(cin, name);
		cout << "Фамилия: ";
		getline(cin, surname);
		cout << "Возраст: ";
		cin >> age;
		cout << endl;
	}
	void get_info() {
		cout << "Ребёнок: " << endl;
		cout << surname << " " << name << " (" << age << " лет)" << endl;
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Child a, b;
	a.put_info();
	cin.ignore();
	b.put_info();
	cout << endl;
	a.get_info();
	cout << endl;
	b.get_info();

	_getch();
	return 0;
}