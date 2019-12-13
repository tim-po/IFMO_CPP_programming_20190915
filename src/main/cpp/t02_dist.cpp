//Даны четыре действительных числа: x1, y1, x2, y2. 
// Напишите функцию distance(x1, y1, x2, y2), вычисляющую расстояние между точкой (x1. y1) и (x2, y2).
// Считайте четыре действительных числа и выведите результат работы этой функции.
//
//Формат входных данных
//        Вводятся четыре действительных числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//0
//0
//1
//1
//Sample Output:
//
//1.41421

#include <iostream>
#include <cmath>

using namespace std;

//function distance
double dist(double a, double b, double c, double d){
    return sqrt((c-a)*(c-a) + (d-b)*(d-b));
};

int t02_dist() {
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << dist(a,b,c,d);

    return 0;
}
