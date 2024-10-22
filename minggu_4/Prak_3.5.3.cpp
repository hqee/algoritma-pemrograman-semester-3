#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    float s, area;

    cout << "Masukkan panjang sisi pertama: ";
    cin >> a;
    cout << "Masukkan panjang sisi kedua: ";
    cin >> b;
    cout << "Masukkan panjang sisi ketiga: ";
    cin >> c;

    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Luas segitiga adalah " << area << endl;

    return 0;
}