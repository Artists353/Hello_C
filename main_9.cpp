#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

//Первая задача
/*int main() {
    setlocale(LC_ALL, "Russian");
    int M, N;
    cout << "Введите размер массива A: ";
    cin >> M;
    cout << "Введите размер массива B: ";
    cin >> N;

    vector<int> A(M);
    vector<int> B(N);

    cout << "Введите элементы массива A:\n";
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    cout << "Введите элементы массива B:\n";
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    unordered_set<int> setB(B.begin(), B.end());
    unordered_set<int> resultSet;

    for (int i = 0; i < M; ++i) {
        if (setB.find(A[i]) == setB.end()) {
            resultSet.insert(A[i]);
        }
    }

    // Переносим результат в вектор (если нужен массив)
    vector<int> result(resultSet.begin(), resultSet.end());

    cout << "Результирующий массив:\n";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}*/

//вторая задача
/*int main() {  
    setlocale(LC_ALL, "Russian");
    int M, N;
    cout << "Введите размер массива A: ";
    cin >> M;
    cout << "Введите размер массива B: ";
    cin >> N;

    vector<int> A(M), B(N);
    unordered_set<int> setA, setB, result;

    cout << "Введите элементы массива A:\n";
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
        setA.insert(A[i]);  // наполняем множество A
    }

    cout << "Введите элементы массива B:\n";
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
        setB.insert(B[i]);  // наполняем множество B
    }

    // Добавляем элементы из A, которых нет в B
    for (int a : setA) {
        if (setB.find(a) == setB.end()) {
            result.insert(a);
        }
    }

    // Добавляем элементы из B, которых нет в A
    for (int b : setB) {
        if (setA.find(b) == setA.end()) {
            result.insert(b);
        }
    }

    // Вывод результата
    cout << "Результирующий массив:\n";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}*/


//Третия задача 
/*int main() {
    //Функция перевода для компилятора на русский язык 
    setlocale(LC_ALL, "Russian");
    int M, N;
    cout << "Введите размер массива A: ";
    cin >> M;
    cout << "Введите размер массива B: ";
    cin >> N;

    vector<int> A(M), B(N);
    unordered_set<int> resultSet;

    cout << "Введите элементы массива A:\n";
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
        resultSet.insert(A[i]);  // вставляем в итоговое множество
    }

    cout << "Введите элементы массива B:\n";
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
        resultSet.insert(B[i]);  // тоже вставляем — set не допускает повторов
    }

    // Переносим результат в вектор (можно использовать как массив)
    vector<int> result(resultSet.begin(), resultSet.end());

    cout << "Результирующий массив:\n";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}*/

//Четвёртая задача 
/*int main() {
    setlocale(LC_ALL, "Russian");
    int M;
    cout << "Введите размер массива A: ";
    cin >> M;

    vector<int> A(M);

    cout << "Введите элементы массива A:\n";
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    int choice;
    cout << "\nМеню:\n";
    cout << "1 - Удалить четные значения\n";
    cout << "2 - Удалить нечетные значения\n";
    cout << "Выберите вариант: ";
    cin >> choice;

    vector<int> result;

    if (choice == 1) {
        // Удаляем чётные
        for (int i = 0; i < M; ++i) {
            if (A[i] % 2 != 0) {
                result.push_back(A[i]);
            }
        }
    } else if (choice == 2) {
        // Удаляем нечётные
        for (int i = 0; i < M; ++i) {
            if (A[i] % 2 == 0) {
                result.push_back(A[i]);
            }
        }
    } else {
        cout << "Неверный выбор.\n";
        return 1;
    }

    cout << "\nРезультирующий массив:\n";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}*/