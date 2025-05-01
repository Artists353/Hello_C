#include <iostream>
using namespace std;

//Первая задача
/*int main() {
    //Фнкция перевода на русский язык 
    setlocale(LC_ALL, "Russian");
    int a[3][4] = {
        {0, 1, 0, 5},
        {0, 3, 0, 0},
        {7, 0, 0, 2}
    };

    int count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] == 0) {
                count = count + 1;
            }
        }
    }

    cout << "Количество нулей: " << count << endl;

    return 0;
}*/

//вторая задача
/*int main() {
    //Фнкция перевода на русский язык 
    setlocale(LC_ALL, "Russian");
    const int p = 4;
    int a[p][p] = {
        {5,  3,  7,  1},
        {2,  8,  4,  6},
        {9,  0, 11, 12},
        {13,14, 15,16}
    };

    int max = a[0][0]; // Начальное значение из тёмно-синей части

    for (int i = 0; i < p; i++) {
        for (int j = 0; j <= i; j++) { // только нижний треугольник (включая диагональ)
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    cout << "Максимум в тёмно-синей части: " << max << endl;

    return 0;
}*/

//Третия задача
/*int main() {
    const int n = 4;
    int a[n][n] = {
        { 5,  2,  3,  4},
        { 6,  7,  8,  9},
        {10, 11, 12, 13},
        {14, 15, 16, 17}
    };

    int max = a[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) { // нижний треугольник
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    cout << "Максимум в синей зоне (вариант а): " << max << endl;

    return 0;
}*/



