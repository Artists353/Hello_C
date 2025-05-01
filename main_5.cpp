#include <iostream>
#include <cstdlib> // для rand() и srand()
#include <ctime>   // для time()
using namespace std;

/*int Change(int number) {
	switch (number) {
	case 2:
		cout << "2";
		break;
	case 3:
		cout << "3";
		break;
	case 4:
		cout << "4";
		break;
	case 5:
		cout << "5";
		break;
	case 6:
		cout << "6";
	case 7:
		cout << "7";
		break;
	case 8:
		cout << "8";
		break;
	case 9:
		cout << "9";
		break;
	case 10:
		cout << "A";
		break;
	case 11:
		cout << "B";
		break;
	case 12:
		cout << "C";
		break;
	case 13:
		cout << "D";
		break;
	case 14:
		cout << "E";
		break;
	case 15:
		cout << "F";
		break;
	case 16:
		cout << "10";
		break;
	case 17:
		cout << "11";
		break;
	case 18:
		cout << "12";
		break;
	case 19:
		cout << "13";
		break;
	case 20:
		cout << "14";
		break;
	case 21:
		cout << "15";
		break;
	case 22:
		cout << "16";
		break;
	case 23:
		cout << "17";
		break;
	case 24:
		cout << "18";
		break;
	case 25:
		cout << "19";
		break;
	case 26:
		cout << "1A";
		break;
	case 27:
		cout << "1B";
		break;
	case 28:
		cout << "1C";
		break;
	case 29:
		cout << "1D";
		break;
	case 30:
		cout << "1E";
		break;
	case 31:
		cout << "1F";
		break;
	case 32:
		cout << "20";
		break;
	}
	return 0;

}

int main() {
	//Функция перевода на русский функция
	setlocale(LC_ALL, "Russian");
	//Переменная в которую будем записывать 
	int number = 0;
	cin >> number;
	Change(number);
	//возращаем 0
	return 0;
}*/

//Вторая задача
/*int main() {
	setlocale(LC_ALL, "Russian");
	int human[5], computer[5];
	int i, choice;
	int human_sum = 0, computer_sum = 0;
	int who_first;

	// Инициализация генератора случайных чисел
	srand(time(0));

	// Кто ходит первым
	cout << "Кто ходит первым? (1 - человек, 2 - компьютер): ";
	cin >> who_first;

	// Броски
	for (i = 0; i < 5; i++) {
		if (who_first == 1) {
			// Ход человека
			cout << "Ход человека (нажмите Enter)...";
			cin.ignore();
			cin.get();
			human[i] = rand() % 6 + 1;
			human_sum += human[i];

			// Отображение кубика
			cout << "Выпало: " << human[i] << endl;

			// Ход компьютера
			computer[i] = rand() % 6 + 1;
			computer_sum += computer[i];
			cout << "Компьютер бросает... Выпало: " << computer[i] << endl;
		}
		else {
			// Ход компьютера
			computer[i] = rand() % 6 + 1;
			computer_sum += computer[i];
			cout << "Компьютер бросает... Выпало: " << computer[i] << endl;

			// Ход человека
			cout << "Ход человека (нажмите Enter)...";
			cin.ignore();
			cin.get();
			human[i] = rand() % 6 + 1;
			human_sum += human[i];
			cout << "Выпало: " << human[i] << endl;
		}

		cout << "-----" << endl;
	}

	// Среднее значение
	float human_avg = human_sum / 5.0;
	float computer_avg = computer_sum / 5.0;

	cout << "\nРезультаты:\n";
	cout << "Сумма человека: " << human_sum << ", Среднее: " << human_avg << endl;
	cout << "Сумма компьютера: " << computer_sum << ", Среднее: " << computer_avg << endl;

	if (human_sum > computer_sum) {
		cout << "Вы победили!" << endl;
	}
	else if (computer_sum > human_sum) {
		cout << "Победил компьютер!" << endl;
	}
	else {
		cout << "Ничья!" << endl;
	}

	return 0;
}*/

//Третия задача
// Функция, которая печатает прямоугольник из символов '*'
/*void printRectangle(int m, int k) {
	int i = 0; 
	int j = 0;

	for (i = 0; i < m; i++) {         // строки (высота)
		for (j = 0; j < k; j++) {     // столбцы (ширина)
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int M = 0;
	int K = 0;

	cout << "Введите высоту M: ";
	cin >> M;

	cout << "Введите ширину K: ";
	cin >> K;

	printRectangle(M, K);

	return 0;
}*/

//Четвёртая задача
// Функция проверяет, является ли число простым
/*bool isPrime(int n) {
	if (n <= 1) {
		return false; // числа <= 1 не являются простыми
	}

	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return false; // делится на другое число — не простое
		}
	}

	return true; // не делится ни на одно число — простое
}

int main() {
	setlocale(LC_ALL, "Russian");
	int number;

	cout << "Введите число: ";
	cin >> number;

	if (isPrime(number)) {
		cout << number << " — простое число." << endl;
	}
	else {
		cout << number << " — не простое число." << endl;
	}

	return 0;
}*/
//Шестая задача
// Функция ищет минимум и максимум в массиве
/*void findMinMax(int arr[], int size) {
	setlocale(LC_ALL, "Russian");
	int minVal = arr[0];
	int maxVal = arr[0];
	int minIndex = 0;
	int maxIndex = 0;

	int i;
	for (i = 1; i < size; i++) {
		if (arr[i] < minVal) {
			minVal = arr[i];
			minIndex = i;
		}
		if (arr[i] > maxVal) {
			maxVal = arr[i];
			maxIndex = i;
		}
	}

	cout << "Минимум: " << minVal << ", индекс: " << minIndex << endl;
	cout << "Максимум: " << maxVal << ", индекс: " << maxIndex << endl;
}

int main() {
	const int SIZE = 6;
	int arr[SIZE] = { 12, 5, 7, 25, 3, 10 };

	findMinMax(arr, SIZE);

	return 0;
}*/

//Седьмая часть
// Функция меняет порядок элементов массива на противоположный
/*void reverseArray(int arr[], int size) {
	int i = 0;
	int j = size - 1;
	while (i < j) {
		// меняем местами элементы arr[i] и arr[j]
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		i = i + 1;
		j = j - 1;
	}
}

// Функция выводит массив
void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	const int SIZE = 6;
	int arr[SIZE] = { 1, 2, 3, 4, 5, 6 };

	cout << "Исходный массив: ";
	printArray(arr, SIZE);

	reverseArray(arr, SIZE);

	cout << "Обратный порядок: ";
	printArray(arr, SIZE);

	return 0;
}*/

