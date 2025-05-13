#include <iostream>
#include <algorithm> // для std::sort
#include <ctime>     // для srand, time
#include <cstdlib>   // для rand
#include <random>    // std::default_random_engine
using namespace std;

//Задание 1
/*void sortArray(int arr[], int size, int order = 1) {
    if (order == 0) {
        // Сортировка по возрастанию
        sort(arr, arr + size);
    }
    else {
        // Сортировка по убыванию
        sort(arr, arr + size, [](int a, int b) { return a > b; });
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i)
       cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    int array[10] = { 5, 3, 8, 1, 9, 2, 7, 6, 0, 4 };

    cout << "Original array:\n";
    printArray(array, 10);

    sortArray(array, 10, 0); // сортировка по возрастанию
    cout << "Sorted ascending:\n";
    printArray(array, 10);

    sortArray(array, 10); // сортировка по убыванию (по умолчанию)
    cout << "Sorted descending:\n";
    printArray(array, 10);

    return 0;
}*/

//Задание 2

/*const int SIZE = 10;

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    int arr[SIZE];

    // Генерация случайных чисел от -20 до 20
    srand(time(0));
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 41 - 20;  // [0..40] - 20 => [-20..20]
    }

    cout << "Original array:\n";
    printArray(arr, SIZE);

    // Поиск позиции первого и последнего отрицательного элемента
    int left = -1, right = -1;
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] < 0) {
            if (left == -1)
                left = i;
            right = i;
        }
    }

    if (left == -1 || left == right) {
        cout << "Недостаточно отрицательных элементов для сортировки.\n";
    }
    else {
        // Сортировка элементов между left и right (НЕ включая их)
        sort(arr + left + 1, arr + right);

        cout << "Array after sorting between the first and last negative elements:\n";
        printArray(arr, SIZE);
    }

    return 0;
}*/

//задание 3


/*const int SIZE = 20;

// Функция для печати массива
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Функция перемешивания массива
void shuffleArray(int arr[], int size) {
    default_random_engine engine(static_cast<unsigned>(std::time(nullptr)));
    shuffle(arr, arr + size, engine);
}

int main() {
    int arr[SIZE];

    // Заполнение значениями от 1 до 20
    for (int i = 0; i < SIZE; ++i)
        arr[i] = i + 1;

    // Перемешивание
    shuffleArray(arr, SIZE);

    cout << "Shuffled array:\n";
    printArray(arr, SIZE);

    // Генерация случайного числа от 1 до 20
    int target = rand() % 20 + 1;
    cout << "Random target number: " << target << "\n";

    // Поиск позиции (индекса) первого вхождения
    int pos = -1;
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] == target) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << "Number not found in the array (что маловероятно).\n";
        return 1;
    }

    cout << "Position of target number: " << pos << "\n";

    // Сортировка левой части по убыванию
    if (pos > 0)
        sort(arr, arr + pos, [](int a, int b) { return a > b; });

    // Сортировка правой части по возрастанию
    if (pos < SIZE - 1)
        sort(arr + pos + 1, arr + SIZE);

    cout << "Final array:\n";
    printArray(arr, SIZE);

    return 0;
}*/