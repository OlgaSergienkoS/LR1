#include <iostream>
#include <cstring>
#include "AinBLib.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char strB[150], strA[50];
    cout << "Введите строку B: ";
    cin.getline(strB, 50);
    cout << "Введите подстроку A: ";
    cin.getline(strA, 25);
    if (AinB(strB, strA) == false) cout << "Подстрока A НЕ входит в строку B" << endl;
    else cout << "Подстрока A входит в строку B" << endl;
    return 0;
}