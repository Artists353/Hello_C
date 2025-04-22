#include <iostream>
using namespace std;

//Пятая задача
int main() {
    //вводим функцию перевода
    setlocale(LC_ALL, "Russian");
    //Создаём переменную пустую
    int menu_mouth = 0;
    //Приглашаем на ввод месяца
    cout << "Введи номер месяца(1-12):\n";
    cin >> menu_mouth;
    //создаём переменную недели
    int menu_week = 0;
    //Приглашаем на ввод числа из месяца от 1-7
    cout << "Введи номер дня недели(1-7):\n";
    cin >> menu_week;
    if (menu_mouth == 1){
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t January\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t1\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 2){
            cout << "\t\t\t\t\t\t January\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 3){
            cout << "\t\t\t\t\t\t January\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 4){
            cout << "\t\t\t\t\t\t January\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 5){
            cout << "\t\t\t\t\t\t January\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 6){
            cout << "\t\t\t\t\t\t January\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 7){
            cout << "\t\t\t\t\t\t January\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t_\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
    }
    if (menu_mouth == 2){
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t February\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t1\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28";
        }
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t February\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28";
        }
        if (menu_week == 2){
            cout << "\t\t\t\t\t\t February\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28";
        }
        if (menu_week == 3){
            cout << "\t\t\t\t\t\t February\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28";
        }
        if (menu_week == 4){
            cout << "\t\t\t\t\t\t February\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28";
        }
        if (menu_week == 5){
            cout << "\t\t\t\t\t\t February\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28";
        }
        if (menu_week == 6){
            cout << "\t\t\t\t\t\t February\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28";
        }
        if (menu_week == 7){
            cout << "\t\t\t\t\t\t February\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t_\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28";
        }
    }
    if (menu_mouth == 3){
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t March\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t1\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 2){
            cout << "\t\t\t\t\t\t March\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 3){
            cout << "\t\t\t\t\t\t March\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 4){
            cout << "\t\t\t\t\t\t March\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 5){
            cout << "\t\t\t\t\t\t March\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 6){
            cout << "\t\t\t\t\t\t March\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 7){
            cout << "\t\t\t\t\t\t March\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t_\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
    }
    if (menu_mouth == 4){
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t April\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t1\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 2){
            cout << "\t\t\t\t\t\t April\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 3){
            cout << "\t\t\t\t\t\t April\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 4){
            cout << "\t\t\t\t\t\t April\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 5){
            cout << "\t\t\t\t\t\t April\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 6){
            cout << "\t\t\t\t\t\t April\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 7){
            cout << "\t\t\t\t\t\t April\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t_\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
    }
    if (menu_mouth == 5){
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t May\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t1\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 2){
            cout << "\t\t\t\t\t\t May\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 3){
            cout << "\t\t\t\t\t\t May\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 4){
            cout << "\t\t\t\t\t\t May\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 5){
            cout << "\t\t\t\t\t\t May\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 6){
            cout << "\t\t\t\t\t\t May\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 7){
            cout << "\t\t\t\t\t\t May\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t_\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
    }
    if (menu_mouth == 6){
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t June\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t1\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 2){
            cout << "\t\t\t\t\t\t June\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 3){
            cout << "\t\t\t\t\t\t June\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 4){
            cout << "\t\t\t\t\t\t June\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 5){
            cout << "\t\t\t\t\t\t June\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 6){
            cout << "\t\t\t\t\t\t June\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 7){
            cout << "\t\t\t\t\t\t June\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t_\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
    }
    if (menu_mouth == 7){
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t July\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t1\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 2){
            cout << "\t\t\t\t\t\t July\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 3){
            cout << "\t\t\t\t\t\t July\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 4){
            cout << "\t\t\t\t\t\t July\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 5){
            cout << "\t\t\t\t\t\t July\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 6){
            cout << "\t\t\t\t\t\t July\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 7){
            cout << "\t\t\t\t\t\t July\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t_\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
    }
    if (menu_mouth == 8){
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t August\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t1\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 2){
            cout << "\t\t\t\t\t\t August\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 3){
            cout << "\t\t\t\t\t\t August\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 4){
            cout << "\t\t\t\t\t\t August\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 5){
            cout << "\t\t\t\t\t\t August\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 6){
            cout << "\t\t\t\t\t\t August\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 7){
            cout << "\t\t\t\t\t\t August\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t_\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
    }
    if (menu_mouth == 9){
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t September\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t1\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 2){
            cout << "\t\t\t\t\t\t September\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 3){
            cout << "\t\t\t\t\t\t September\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 4){
            cout << "\t\t\t\t\t\t September\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 5){
            cout << "\t\t\t\t\t\t September\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 6){
            cout << "\t\t\t\t\t\t September\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 7){
            cout << "\t\t\t\t\t\t September\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t_\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
    }
    if (menu_mouth == 10){
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t October\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t1\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 2){
            cout << "\t\t\t\t\t\t October\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 3){
            cout << "\t\t\t\t\t\t October\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 4){
            cout << "\t\t\t\t\t\t October\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 5){
            cout << "\t\t\t\t\t\t October\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 6){
            cout << "\t\t\t\t\t\t October\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
        if (menu_week == 7){
            cout << "\t\t\t\t\t\t October\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t_\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30\t\t31";
        }
    }
    if (menu_mouth == 11){
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t November\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t1\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 2){
            cout << "\t\t\t\t\t\t November\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 3){
            cout << "\t\t\t\t\t\t November\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 4){
            cout << "\t\t\t\t\t\t November\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 5){
            cout << "\t\t\t\t\t\t November\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 6){
            cout << "\t\t\t\t\t\t November\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 7){
            cout << "\t\t\t\t\t\t November\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t_\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
    }
    if (menu_mouth == 12){
        if (menu_week == 1){
            cout << "\t\t\t\t\t\t December\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t1\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 2){
            cout << "\t\t\t\t\t\t December\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t2\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 3){
            cout << "\t\t\t\t\t\t December\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t3\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 4){
            cout << "\t\t\t\t\t\t December\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t4\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 5){
            cout << "\t\t\t\t\t\t December\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t5\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 6){
            cout << "\t\t\t\t\t\t December\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t6\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
        if (menu_week == 7){
            cout << "\t\t\t\t\t\t December\t\t\t\t\n\t\tMo\t\tTu\t\tWe\t\tTh\t\tFr\t\tSa\t\tSu\n\t\t_\t\t_\t\t_\t\t_\t\t_\t\t_\t\t7\n\t\t8\t\t9\t\t10\t\t11\t\t12\t\t13\t\t14\n\t\t15\t\t16\t\t17\t\t18\t\t19\t\t20\t\t21\n\t\t22\t\t23\t\t24\t\t25\t\t26\t\t27\t\t28\n\t\t29\t\t30";
        }
    }

   return 0
}
