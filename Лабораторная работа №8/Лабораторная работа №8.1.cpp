#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
#include <vector>

using namespace std;

class Student {
private:
	string name;
	string surname;
	double average;
public:
	void put_info() {
		cout << "Введите имя студента: ";
		getline(cin, name);
		cout << "Введите фамилию студента: ";
		getline(cin, surname);
		cout << "Введите средний балл студента: ";
		cin >> average;
		cin.ignore();
		cout << endl;
	}
	void get_info() {
		cout << "Имя: " << name << endl;
		cout << "Фмилия: " << surname << endl;
		cout << "Средний балл: " << average << endl;
		cout << endl;
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	vector<Student> a(3);
	for (size_t i = 0; i < a.size(); i++) {
		a[i].put_info();
	}
	cout << endl << endl;
	for (size_t i = 0; i < a.size(); i++) {
		a[i].get_info();
	}

	_getch();
	return 0;
}