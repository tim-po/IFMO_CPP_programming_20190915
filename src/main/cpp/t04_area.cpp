//Проверьте, принадлежит ли точка данной закрашенной области:
//
// https://www.dropbox.com/s/3h3nl34g4ciiglt/3795.png?dl=1
//
//Если точка принадлежит области (область включает границы), выведите слово YES, иначе выведите слово NO.
//Решение должно содержать функцию IsPointInArea(x, y), возвращающую True, если точка принадлежит области 
// и False, если не принадлежит. 
// Основная программа должна считать координаты точки, вызвать функцию IsPointInArea 
// и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
//Функция IsPointInArea не должна содержать инструкцию if.
//Формат входных данных
//        Вводятся два действительных числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//-4
//-4
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//-4
//-3
//Sample Output 2:
//
//NO

#include <iostream>
#include <cmath>

using namespace std;

double dist(double a, double b, double c, double d){
    return sqrt((c-a)*(c-a) + (d-b)*(d-b));
};

//function IsPointInArea
bool IsPointInArea(double x, double y){
    return (y >= -x &&  y >= 2*x + 2 && dist(x,y,-1,1) <=2 || y <= -x &&  y <= 2*x + 2 && dist(x,y,-1,1) >=2);
}

int t04_area() {

    double a,b;
    cin >> a >> b;
    cout << IsPointInArea(a,b) ? "YES" : "NO";

    return 0;
}
