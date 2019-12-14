//В сети интернет каждому компьютеру присваивается четырехбайтовый код, 
// который принято записывать в виде четырех чисел, 
// каждое из которых может принимать значения от 0 до 255, разделенных точками.
// Вот примеры правильных IP-адресов:
//127.0.0.0
//192.168.0.1
//255.0.255.255
//Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.
//
//Входные данные
//
//Программа получает на вход строку из произвольных символов.
//
//Выходные данные
//
//Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.
//
//Примечание
//
//Для перевода из строки в число удобно пользоваться функцией stoi,
// которая принимает на вход строку, а возвращает число.
//
//Sample Input:
//
//127.0.0.1
//Sample Output:
//
//YES

#include "t07_ip.h"
#include <iostream>


using namespace std;

int t07_ip() {
    char c;
    int numOfDots = 0;
    string num ="";

    while(cin.get(c)){
        //cout << c << " " << int(c) << endl;
        if(int(c) < 48 || int(c) > 57 ){
            if(int(c) != 46){
                cout << "NO";
                return 0;
            }
        }
        if(int(c) == 46){
            if(num.length() == 0|| stoi(num) > 255 || numOfDots == 3 || (num.length() > 1 && char(num[0]) == '0')){
                cout << "NO";
                return 0;
            }
            numOfDots ++;
            num = "";
        }else{
            num += c;
        }
        //cout << num << endl;
    }

    if(num.length() == 0 || stoi(num) > 255 || numOfDots != 3){
        cout << "NO";
        return 0;
    }else{
        numOfDots ++;
        num = "";
    }
    cout << "YES";
}
