#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int size, k, x;
	cout << "¬ведите длину шифровки 'n' и длину номера секретной базы 'k': " << endl;
	cin >> size >> k;
	int arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> x;
		arr[i] = x;
	}
	for (int i = 0; i < size; i++) {
		cout << "Ёлемент массива [" << i << "] равен = " << arr[i] << endl;
	}

	return 0;
}