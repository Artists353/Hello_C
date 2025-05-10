#include <iostream>
using namespace std;

//Создание функции
/*int main() {
	//Функция перевода
	setlocale(LC_ALL, "Russian");
	//Массив
	int train[3];
	//Заполняем вагоны 
	//Теперь, если обратиться к индексу train["Нужный вам индекс"], то выведет он число по этому индексу
	train[0] = 7;
	train[1] = 8;
	train[2] = 6;
	//Первый способ сохранения данных в массив
	const int size = 3;
	int ar[size] = { 20, 30, 40 };
	double br[size];
	//возращаем 0
	return 0;
}*/

//Первая задача
/*int main() {
	//Функция перевода русских букв для c++
	setlocale(LC_ALL, "Russian");
	//Создаём const переменную в которой будет длина для будущего массива 3 индекса
	const int size = 3;
	int ar[size];

	//цикл перебирает элементы массива
	for (int i = 0; i <= size; i++) {
		cout << "Введите элемент: ";
		//На каждой итерации цикла пользователю подставляется эллемент с индексом i для заполнения. Секрет в том что i - каждый раз новое значение
		cin >> ar[i];
	}
	//возращение 0
	return 0;
}*/

//вторая задача 
/*int main() {
	//Функция перевода на русский
	setlocale(LC_ALL, "Russian");

	// соnst который создаёт длину будущего массива
	const int size = 3;
	//Size перебирает все элементы в массиве
	int ar[size];

	//Цикл for который будет нам прибавлять в массив элементы
	for (int i = 0; i <= size; i++) {
		//Приглашение на ввод
		cout << "Введи элемент";
		//Ввод i перебирает все элементы в массиве
		cin >> ar[i];
	}
	//цикл for который будет нам выводить из массива элементы
	for (int i = 0; i <= size; i++) {
		//Вывод из массива элементы
		cout << ar[i];
	}
	//возращает 0
	return 0;
}*/

//Третия задача
/*int main() {
	//Перевод на русский все символы
	setlocale(LC_ALL, "Russian");

	//создания переменной для будущего индексации массива 
	const int size = 5;
	int ar[size] = { 20, -30, -40, -80, 90 };
	
	//Создание переменной которая будет сохранять все сложения
	int sum = 0;

	//цикл который будет делать каждую итерацию массива 
	for (int i = 0; i <= size; i++) {
		//Условие по которому мы находим цифры меньше 0
		if (ar[i] < 0) {
			//Запихиваем всё в sum 
			sum += ar[i];
		}
	}
	//вывод суммы всех отрицательных чисел в массиве
	cout << sum;
	//возращения 0
	return 0;
}*/

//Четвёртая задача
/*int main() {
	// переменная которая задаёт значения index 
	const int size = 5;
	//массив
	int ar[size] = { 20, 70, 93, 459, 90 };
	//Создаём минимальное значения массива
	int min = ar[size];
	//Создаём макимальное значения массива 
	int max = ar[size];

	//цикл который будет перебирать все значения 
	for (int i = 0; i <= size; i++) {
		// сраавнение 
		if (min > ar[i]) {
			min = ar[i];
		}
		if (max < ar[i]) {
			max = ar[i];
		}
	}
	cout << "Минимальное число" << min << "\n";
	cout << "Максимальное число" << max << "\n";
	//Возращения 0
	return 0;
}*/


//Первая задача
/*int main() {
	//Функция перевода на русский 
	setlocale(LC_ALL, "Russian");
	const int size = 8;
	float arr[size] = { -5.7, 6.0, 2, 0, -4.7, 6, 8.1, -4 };
	//создаём позитивные и негативные переменные
	int positive = 0;
	int negative = 0;
	//Цикл for который ищёт позитивные числа
	for (int i = 0; i<= size; i++) {
		//сравнение что бы найти позитивное число
		if (arr[i] > 0) {
			//записываем в позитивное число
			positive = arr[i];
			//ломаем цикл
			break;
		}
	}

	//Цикл for который ищёт позитивные числа
	for (int i = 0; i <= size; i++) {
		if (arr[i] < 0) {
			negative = arr[i];
			break;
		}
	}
	cout << "Последние позитивное число: " << positive << endl;
	cout << "Последние негативное число: " << negative << endl;

	//возращает 0
	return 0;
}*/

//вторая задача 
/*int main() {
	const int totalFlats = 4 * 5 * 2; // 4 подъезда * 5 этажей * 2 квартиры
	int flats[totalFlats];

	// Ввод количества жильцов в каждой квартире
	cout << "Введите количество жильцов в каждой из " << totalFlats << " квартир:\n";
	for (int i = 0; i < totalFlats; i++) {
		cin >> flats[i];
	}

	// --- пункт а ---
	int flatNumber;
	cout << "\nВведите номер квартиры для поиска жильцов и их соседей (от 1 до " << totalFlats << "): ";
	cin >> flatNumber;

	if (flatNumber < 1 || flatNumber > totalFlats) {
		cout << "Такой квартиры нет.\n";
	}
	else {
		cout << "В квартире " << flatNumber << " живет " << flats[flatNumber - 1] << " человек(а).\n";

		// Поиск соседей на одном этаже
		int pairFlat;
		if (flatNumber % 2 == 0) {
			pairFlat = flatNumber - 1; // левая квартира
		}
		else {
			pairFlat = flatNumber + 1; // правая квартира
		}

		if (pairFlat >= 1 && pairFlat <= totalFlats) {
			cout << "Соседняя квартира: " << pairFlat << ", жильцов: " << flats[pairFlat - 1] << endl;
		}
		else {
			cout << "Соседняя квартира отсутствует.\n";
		}
	}

	// --- пункт б ---
	cout << "\nСуммарное количество жильцов по каждому подъезду:\n";
	for (int entrance = 0; entrance < 4; entrance++) {
		int sum = 0;
		for (int floor = 0; floor < 5; floor++) {
			for (int flat = 0; flat < 2; flat++) {
				int index = entrance * 10 + floor * 2 + flat;
				sum += flats[index];
			}
		}
		cout << "Подъезд " << (entrance + 1) << ": " << sum << " жильцов\n";
	}

	// --- пункт в ---
	cout << "\nКвартиры с многодетными семьями (больше 5 человек):\n";
	for (int i = 0; i < totalFlats; i++) {
		if (flats[i] > 5) {
			cout << "Квартира " << (i + 1) << ": " << flats[i] << " человек(а)\n";
		}
	}

	return 0;
}*/

//Третия задача
/*int main() {
	//Функция перевода на русский
	setlocale(LC_ALL, "Russian");

	const int days = 31; // январь — 31 день
	int temperature[days];

	// Ввод температуры по дням
	cout << "Введите температуру за каждый из 31 дня января:\n";
	for (int i = 0; i < days; i++) {
		cin >> temperature[i];
	}

	// --- пункт а --- средняя температура
	int sum = 0;
	for (int i = 0; i < days; i++) {
		sum += temperature[i];
	}
	double average = (double)sum / days;
	cout << "\nСредняя температура за январь: " << average << endl;

	// --- пункт б --- сколько раз температура была ниже указанной метки
	int limit;
	cout << "\nВведите метку температуры: ";
	cin >> limit;

	int count = 0;
	for (int i = 0; i < days; i++) {
		if (temperature[i] < limit) {
			count++;
		}
	}
	cout << "Температура опускалась ниже " << limit << " градусов " << count << " раз(а).\n";

	return 0;
}*/

//Четвёртая задача
/*int main() {
	//Функция перевода на руский
	setlocale(LC_ALL, "Russian");
	const int n = 10; // 10 автомобилей
	int prices[n];

	// Ввод цен автомобилей
	cout << "Введите стоимость 10 автомобилей:\n";
	for (int i = 0; i < n; i++) {
		cin >> prices[i];
	}

	// Поиск максимальной стоимости
	int maxPrice = prices[0];
	for (int i = 1; i < n; i++) {
		if (prices[i] > maxPrice) {
			maxPrice = prices[i];
		}
	}

	// Поиск номера первого автомобиля с максимальной ценой
	int firstIndex = -1;
	for (int i = 0; i < n; i++) {
		if (prices[i] == maxPrice) {
			firstIndex = i;
			break;
		}
	}

	// Поиск номера последнего автомобиля с максимальной ценой
	int lastIndex = -1;
	for (int i = 0; i < n; i++) {
		if (prices[i] == maxPrice) {
			lastIndex = i;
		}
	}

	// Вывод результатов
	cout << "\nНаибольшая стоимость автомобиля: " << maxPrice << endl;
	cout << "Номер первого автомобиля с такой стоимостью: " << (firstIndex + 1) << endl;
	cout << "Номер последнего автомобиля с такой стоимостью: " << (lastIndex + 1) << endl;

	return 0;
}*/

//Пятая задача
/*int main() {
	//Функция перевода на русский язык
	setlocale(LC_ALL, "Russian");

	const int n = 10; // например, 10 элементов
	int a[n];

	// Ввод элементов массива
	cout << "Введите " << n << " чисел:\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << "\nПовторяющиеся элементы:\n";

	for (int i = 0; i < n; i++) {
		bool alreadyChecked = false;

		// Проверка, не выводили ли мы уже этот элемент раньше
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				alreadyChecked = true;
				break;
			}
		}

		if (alreadyChecked == false) {
			int count = 1;
			// Считаем, сколько раз элемент встречается дальше
			for (int j = i + 1; j < n; j++) {
				if (a[i] == a[j]) {
					count++;
				}
			}
			if (count >= 2) {
				cout << a[i] << endl;
			}
		}
	}

	return 0;
}*/

//Шестая задача
/*int main() {
	//Функция перевода на русский язык 
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	const int m = 20;
	int A[n], B[n], X[m];

	// Ввод массива A
	cout << "Введите 10 элементов массива A:\n";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	// Ввод массива B
	cout << "Введите 10 элементов массива B:\n";
	for (int i = 0; i < n; i++) {
		cin >> B[i];
	}

	// --- пункт а --- чередование (a0, b0, a1, b1, ..., a9, b9)
	cout << "\nМассив X (чередование элементов A и B):\n";
	int k = 0; // индекс для массива X
	for (int i = 0; i < n; i++) {
		X[k] = A[i];
		k++;
		X[k] = B[i];
		k++;
	}

	for (int i = 0; i < m; i++) {
		cout << X[i] << " ";
	}
	cout << endl;

	// --- пункт б --- сначала все из A, потом все из B
	cout << "\nМассив X (сначала элементы A, потом элементы B):\n";
	// сначала копируем A
	for (int i = 0; i < n; i++) {
		X[i] = A[i];
	}
	// потом копируем B
	for (int i = 0; i < n; i++) {
		X[i + n] = B[i];
	}

	for (int i = 0; i < m; i++) {
		cout << X[i] << " ";
	}
	cout << endl;

	return 0;
}*/