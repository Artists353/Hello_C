#include <iostream>
using namespace std;

//Первая задача 
/*void swapEvenOdd(int* arr, int size) {
    for (int i = 0; i < size - 1; i += 2) {
        // указатели на текущий и следующий элементы
        int* evenPtr = arr + i;
        int* oddPtr = arr + i + 1;

        // обмен значениями через указатели
        int temp = *evenPtr;
        *evenPtr = *oddPtr;
        *oddPtr = temp;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    swapEvenOdd(arr, size);

    cout << "После обмена четных и нечетных индексов: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}*/

//Вторая задача 
/*void mergeArrays(int* A, int n, int* B, int m, int* C) {
    int* ptrA = A;
    int* ptrB = B;
    int* ptrC = C;

    while (ptrA < A + n && ptrB < B + m) {
        if (*ptrA < *ptrB) {
            *ptrC = *ptrA;
            ptrA++;
        } else {
            *ptrC = *ptrB;
            ptrB++;
        }
        ptrC++;
    }

    // Копируем оставшиеся элементы из A
    while (ptrA < A + n) {
        *ptrC = *ptrA;
        ptrA++;
        ptrC++;
    }

    // Копируем оставшиеся элементы из B
    while (ptrB < B + m) {
        *ptrC = *ptrB;
        ptrB++;
        ptrC++;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8, 10};

    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);

    int C[n + m]; // массив для результата

    mergeArrays(A, n, B, m, C);

    cout << "Итоговый отсортированный массив C: ";
    for (int i = 0; i < n + m; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}*/

//Третия задача
// Проверка, содержит ли массив элемент
/*bool contains(int* arr, int size, int value) {
    for (int* ptr = arr; ptr < arr + size; ++ptr) {
        if (*ptr == value)
            return true;
    }
    return false;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {4, 5, 6, 7, 8};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);

    int C[100]; // массив для всех объединений (резервируем с запасом)
    int* ptrC = C;
    int sizeC = 0;

    // 1. Все элементы обоих массивов
    int* ptr = A;
    for (int i = 0; i < n; ++i) {
        *ptrC = *(ptr + i);
        ptrC++;
        sizeC++;
    }

    ptr = B;
    for (int i = 0; i < m; ++i) {
        *ptrC = *(ptr + i);
        ptrC++;
        sizeC++;
    }

    // 2. Общие элементы
    int common[100];
    int* ptrCommon = common;
    int sizeCommon = 0;

    for (int* a = A; a < A + n; ++a) {
        if (contains(B, m, *a) && !contains(common, sizeCommon, *a)) {
            *ptrCommon = *a;
            ptrCommon++;
            sizeCommon++;
        }
    }

    // 3. Элементы A, которых нет в B
    int onlyA[100];
    int* ptrOnlyA = onlyA;
    int sizeOnlyA = 0;

    for (int* a = A; a < A + n; ++a) {
        if (!contains(B, m, *a)) {
            *ptrOnlyA = *a;
            ptrOnlyA++;
            sizeOnlyA++;
        }
    }

    // 4. Элементы B, которых нет в A
    int onlyB[100];
    int* ptrOnlyB = onlyB;
    int sizeOnlyB = 0;

    for (int* b = B; b < B + m; ++b) {
        if (!contains(A, n, *b)) {
            *ptrOnlyB = *b;
            ptrOnlyB++;
            sizeOnlyB++;
        }
    }

    // 5. Элементы, не являющиеся общими
    int notCommon[100];
    int* ptrNotCommon = notCommon;
    int sizeNotCommon = 0;

    for (int i = 0; i < sizeOnlyA; ++i) {
        *ptrNotCommon = onlyA[i];
        ptrNotCommon++;
        sizeNotCommon++;
    }

    for (int i = 0; i < sizeOnlyB; ++i) {
        *ptrNotCommon = onlyB[i];
        ptrNotCommon++;
        sizeNotCommon++;
    }

    // Печать результатов
    cout << "1. Все элементы A и B: ";
    for (int i = 0; i < sizeC; ++i)
        cout << C[i] << " ";
    cout << "\n";

    cout << "2. Общие элементы: ";
    for (int i = 0; i < sizeCommon; ++i)
        cout << common[i] << " ";
    cout << "\n";

    cout << "3. Только в A: ";
    for (int i = 0; i < sizeOnlyA; ++i)
        cout << onlyA[i] << " ";
    cout << "\n";

    cout << "4. Только в B: ";
    for (int i = 0; i < sizeOnlyB; ++i)
        cout << onlyB[i] << " ";
    cout << "\n";

    cout << "5. Необщие элементы: ";
    for (int i = 0; i < sizeNotCommon; ++i)
        cout << notCommon[i] << " ";
    cout << "\n";

    return 0;
}*/
