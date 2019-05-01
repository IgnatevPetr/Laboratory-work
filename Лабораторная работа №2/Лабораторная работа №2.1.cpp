#include <iostream>
#include <conio.h>

using namespace std;


int sum(int a, int b) {
	return a + b;
}

int mult(int a, int b) {
	return a * b;
}

int func(int *arr, int size, int(*fun)(int a, int b), int *res) {
	for (int i = 0; i < size; i++) {
		*res = fun(*res, arr[i]);
	}
	return *res;
}

int main() {
	setlocale(LC_ALL, "Russian");

	int n, *A, choice, res;
	int (*pr)(int a, int b);
	cout << "Введите кол-во элементов в массиве: ";
	cin >> n;
	A = new int[n];
	cout << "Введите элементы массива" << endl;
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	cout << endl;
	cout << "Выберите, что хотите сделать с массивом: " << endl;
	cout << "1 - Сложить все элементы массива" << endl;
	cout << "2 - Перемножить все элементы массива" << endl;
	cin >> choice;
	if (choice == 1) {
		res = 0;
		pr = sum;
	}
	else if (choice == 2) {
		res = 1;
		pr = mult;
	}
	else {
		cerr << "Выбор сделан неправильно." << endl;
		_getch();
		return 1;
	}
	res = func(A, n, pr, &res);
	cout << endl << "Ответ: " << res;
	delete[] A;
	_getch();
	return 0;
}