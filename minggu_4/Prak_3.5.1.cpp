#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int a, b, selisih;

    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    // if (a > b)
    // {
    //     selisih = a - b;
    // }
    // else
    // {
    //     selisih = b - a;
    // }

    selisih = abs(a - b);

    cout << "Selisih absolut dari kedua bilangan adalah " << selisih << endl;
    return 0;
}