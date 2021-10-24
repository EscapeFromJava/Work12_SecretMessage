#include <iostream>
#include <string>

using namespace std;
int count_of_substrings(string src, string sub);

int main() {
	setlocale(LC_ALL, "rus");
	int size, key;
	cout << "Введите длину шифровки 'n' и длину номера секретной базы 'k': " << endl;
	cin >> size >> key;
	if (size < 1 || size > 100000 || key < 1 || key > 5) {
		cout << "Некорректный ввод данных!" << endl;
		return 0;
	}
	cout << "Введите шифр: " << endl;
	string cipher, check;
	cin >> cipher;//ввод шифровки
	if (cipher.length() != size) {
		cout << "Некорректный ввод шифра!" << endl;
		return 0;
	}
	for (int i = 0; i < size - key; i++) {//цикл для генерации нового секретного кода с шагом i
		check = cipher.substr(i, key);
		if (count_of_substrings(cipher, check) > 1) {//если функция возвращает больше 1 повторения, то результат положительный
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}

int count_of_substrings(string src, string sub) {
	int start = 0, count = 0, pos = 0;
	while (true) {
		pos = src.find(sub.c_str(), start);
   		if (pos != -1) {
			start = pos + 1;
			count++;					
		}
		else {
			break;
		}
	}
	return count;
}