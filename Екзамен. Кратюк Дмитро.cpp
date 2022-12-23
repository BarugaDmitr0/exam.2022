#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    cout << "К - сть дільників ";
    cin >> a;
    long long Mas[8] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 };

    int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
    switch (a)
    {
    case 1: cout << Mas[0] << "\n";
        sum = Mas[0];
        cout << "Сума чисел:" << sum << "\n";
        break;
    case 2: cout << Mas[1] << "\n" << Mas[2] << "\n" << Mas[4] << "\n" << Mas[6] << "\n";
        sum1 = Mas[1] + Mas[2] + Mas[4] + Mas[6];
        cout << "Сума чисел:" << sum1 << "\n";
        break;
    case 3: cout << Mas[3] << "\n";
        sum2 = Mas[3];
        cout << "Сума чисел:" << sum2 << "\n";
        break;
    case 4: cout << Mas[5] << "\n" << Mas[7] << "\n";
        sum3 = Mas[5] + Mas[7];
        cout << "Сума чисел:" << sum3 << "\n";
        break;
    }



}