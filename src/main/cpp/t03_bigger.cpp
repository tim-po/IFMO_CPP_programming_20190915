//Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 5 2 4 3
//Sample Output:
//
//5 4

#include "t03_bigger.h"
#include <iostream>


using namespace std;

int t03_bigger() {

    int n;
    cin >> n;

    int num2, num;
    cin >> num2;

    for(int i =0;i<n;i++){
        cin >> num;
        if(num > num2){
            cout << num << " ";
        }
        num2 = num;
    }

}
