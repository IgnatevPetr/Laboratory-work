#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>

using namespace std;

class Student {
protected:
	string name;
	string surname;
	int rec_num;
public:
	Student(string a, string b, int c) :name(a), surname(b), rec_num(c) {}
	void get_info() {
		cout << "Имя: " << name << endl << "Фамилия: " << surname << endl << "Номер зачётки: " << rec_num << endl;
	}
};

class Head :Student {
private:
	int journ_num;
public:
	Head(string a, string b, int c, int d) :Student(a, b, c), journ_num(d) {}
	void get_info_head() {
		get_info();
		cout << "Номер журнала группы: " << journ_num;
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	string a, b;
	int c, d;
	cout << "Введите данные о студенте" << endl;
	cout << "Введите имя: ";
	getline(cin, a);
	cout << "Введите фамилию: ";
	getline(cin, b);
	cout << "Введите номер зачётки: ";
	cin >> c;
	cin.ignore();
	Student stud(a, b, c);
	cout << endl << "Введите данные о старосте" << endl;
	cout << "Введите имя: ";
	getline(cin, a);
	cout << "Введите фамилию: ";
	getline(cin, b);
	cout << "Введите номер зачётки: ";
	cin >> c;
	cout << "Введите номер журнала группы: ";
	cin >> d;
	Head j(a, b, c, d);
	cout << endl;
	cout << "Информация о студенте" << endl;
	stud.get_info();
	cout << endl;
	cout << "Информация о старосте" << endl;
	j.get_info_head();

	_getch();
	return 0;
}