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
	Child() {}
	Child(string a, string b, int c) :name(a), surname(b), age(c) {}
	~Child() {}
	void get_info() {
		cout << "Ребёнок: " << endl;
		cout << surname << " " << name << " (" << age << " лет)" << endl;
	}
	friend bool operator == (const Child &t, const Child &y) {
		if (t.name == y.name && t.surname == y.surname && t.age == y.age)
			return 1;
		else return 0;
	}
};



int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Child A[2];
	string a, b;
	int c;
	for (int i = 0; i < 2; i++) {
		cout << "Имя: ";
		getline(cin, a);
		cout << "Фамилия: ";
		getline(cin, b);
		cout << "Возраст: ";
		cin >> c;
		cout << endl;
		cin.ignore();
		Child g(a, b, c);
		A[i] = g;
	}
	if (A[0] == A[1]) {
		cout << "Это 2 одинаковых ребёнка" << endl << endl;
		cout << "Оба ребёнка:" << endl;
		A[0].get_info();
	}
	else for (int i = 0; i < 2; i++) {
		A[i].get_info();
		cout << endl;
	}

	_getch();
	return 0;
}