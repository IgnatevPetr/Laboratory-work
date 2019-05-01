#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

using namespace std;

class Human {
protected:
	string surname;
	string name;
	string midname;
	int age;
public:
	Human() {}
	Human(string a, string b, string c, int d) :surname(a), name(b), midname(c), age(d) {}
	virtual void print() = 0;
	~Human() {}
};

class Student :public Human {
private:
	bool on_lesson;
public:
	Student() {}
	Student(string a, string b, string c, int d, bool f) :Human(a, b, c, d), on_lesson(f) {}
	void print() {
		cout << "Студент" << endl;
		cout << "Имя: " << name << endl;
		cout << "Фамилия: " << surname << endl;
		cout << "Отчество: " << midname << endl;
		cout << "Возраст: " << age << endl;
		if (on_lesson)
			cout << "Сейчас на лекции" << endl << endl;
		else cout << "Сейчас не на лекции" << endl << endl;
	}
	~Student() {}
};

class Boss :public Human {
private:
	int number_of_workers;
public:
	Boss() {}
	Boss(string a, string b, string c, int d, int f) :Human(a, b, c, d), number_of_workers(f) {}
	void print() {
		cout << "Начальник" << endl;
		cout << "Имя: " << name << endl;
		cout << "Фамилия: " << surname << endl;
		cout << "Отчество: " << midname << endl;
		cout << "Возраст: " << age << endl;
		cout << "Кол-во подчиненных: " << number_of_workers << endl << endl;
	}
	~Boss() {}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Human* peop[4];
	peop[0] = new Student("Андропов", "Сергей", "Семёнович", 18, 1);
	peop[1] = new Boss("Степанов", "Арсений", "Фёдорович", 37, 5);
	peop[2] = new Student("Алексеев", "Олег", "Борисович", 19, 0);
	peop[3] = new Boss("Ларенский", "Валерий", "Игоревич", 51, 12);
	for (int i = 0; i < 4; i++) {
		peop[i]->print();
		delete peop[i];
	}

	_getch();
	return 0;
}