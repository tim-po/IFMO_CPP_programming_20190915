//Даны три целых числа. Определите, сколько среди них совпадающих. Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает) или 0 (если все числа различны).
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//3
//Sample Output:
//
//0

#include "t03_equal3.h"
#include <iostream>

using namespace std;

int t03_equal3() {
    int i,j,k;
    cin >> i >> j >> k;
    int num = 0;
    if(i == j){
        num ++;
    }
    if(j == k){
        num ++;
    }
    if(k == i){
        num ++;
    }
    if(num == 1){
        num++;
    }

    cout << num;

    return 0;
};