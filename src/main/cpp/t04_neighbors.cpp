//Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа.
// Если соседних элементов одного знака нет - не выводите ничего.
// Если таких пар соседей несколько - выведите первую пару.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива. Все числа отличны от нуля.
//Формат выходных данных
//        Выведите ответ на задачу. Элементы выводятся в порядке неубывания их индексов.
//Sample Input:
//
//5
//-1 2 3 -1 -2
//Sample Output:
//
//2 3

#include "t04_neighbors.h"
#include <iostream>


using namespace std;

int t04_neighbors() {
    int n;
    cin >> n;

    int num2, num;
    cin >> num2;

    for(int i =0;i<n;i++){
        cin >> num;
        if(num > 0 && num2 > 0 || num < 0 && num2 < 0){
            cout << min(num2, num) << " " << max(num2, num) << " ";
            break;
        }
        num2 = num;
    }
}
