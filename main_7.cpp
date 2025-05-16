#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//задача 1
// Рекурсивная функция для перемещения дисков
/*void hanoi(int n, int from, int to, int aux) {
    setlocale(LC_ALL, "Russian");
    if (n == 1) {
        cout << "Переместить диск 1 со стержня " << from << " на стержень " << to << endl;
        return;
    }

    // Переместить n-1 дисков на вспомогательный стержень
    hanoi(n - 1, from, aux, to);

    // Переместить самый большой диск на целевой стержень
    cout << "Переместить диск " << n << " со стержня " << from << " на стержень " << to << endl;

    // Переместить n-1 дисков со вспомогательного стержня на целевой
    hanoi(n - 1, aux, to, from);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int numDisks;

    cout << "Введите количество дисков: ";
    cin >> numDisks;

    cout << "\nПошаговое перемещение дисков:\n";
    hanoi(numDisks, 1, 3, 2);

    cout << "\nЗадача решена. Конец света близок...\n";
    return 0;
}*/

//Задача 2
// Рекурсивная функция для вычисления степени a^n
/*double power(double a, int n) {
    if (n == 0)
        return 1;
    else if (n > 0)
        return a * power(a, n - 1);
    else
        return 1 / power(a, -n); // если степень отрицательная
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a;
    int n;

    cout << "Введите число (основание): ";
    cin >> a;

    cout << "Введите степень: ";
    cin >> n;

    double result = power(a, n);
    cout << a << " в степени " << n << " = " << result << endl;

    return 0;
}*/



//Задача 3
// Рекурсивная функция для вывода M звёзд в ряд
/*void printStars(int M) {
    if (M <= 0) return;  // Базовый случай: ничего не выводить
    cout << "*";
    printStars(M - 1);   // Рекурсивный вызов с уменьшенным M
}

int main() {
    setlocale(LC_ALL, "Russian");
    int M;

    cout << "Введите количество звёзд: ";
    cin >> M;

    cout << "Результат: ";
    printStars(M);
    cout << endl;

    return 0;
}*/

//Задача 4
// Рекурсивная функция для вычисления суммы от a до b
/*int sumRange(int a, int b) {
    if (a > b)
        return 0; // базовый случай: если диапазон закончился
    return a + sumRange(a + 1, b); // рекурсивный вызов
}

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;

    cout << "Введите начало диапазона (a): ";
    cin >> a;
    cout << "Введите конец диапазона (b): ";
    cin >> b;

    int result = sumRange(a, b);
    cout << "Сумма чисел от " << a << " до " << b << " = " << result << endl;

    return 0;
}*/

//Задача 5
/*const int SIZE = 100;
const int SEQ_LEN = 10;

// Рекурсивная функция для нахождения позиции с минимальной суммой 10 элементов
int findMinSumPos(int arr[], int index, int minIndex, int& minSum) {
    if (index > SIZE - SEQ_LEN)
        return minIndex;

    // Вычисляем сумму 10 элементов начиная с текущего индекса
    int currentSum = 0;
    for (int i = 0; i < SEQ_LEN; ++i) {
        currentSum += arr[index + i];
    }

    // Обновляем минимальную сумму и позицию, если нужно
    if (currentSum < minSum) {
        minSum = currentSum;
        minIndex = index;
    }

    // Рекурсивный вызов с индексом + 1
    return findMinSumPos(arr, index + 1, minIndex, minSum);
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int arr[SIZE];

    // Заполняем массив случайными числами от -50 до 50
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 101 - 50;
    }

    // Выводим массив
    cout << "Массив:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    int minSum = INT_MAX;
    int startPos = findMinSumPos(arr, 0, 0, minSum);

    cout << "Минимальная сумма из 10 подряд идущих чисел: " << minSum << endl;
    cout << "Начальная позиция (индекс): " << startPos << endl;
    cout << "Подпоследовательность: ";
    for (int i = 0; i < SEQ_LEN; ++i) {
        cout << arr[startPos + i] << " ";
    }
    cout << endl;

    return 0;
}*/