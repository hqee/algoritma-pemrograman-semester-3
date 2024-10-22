#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    float c, f;

    cout << "Masukkan suhu dalam celcius: ";
    cin >> c;

    f = (c * 9 / 5) + 32;

    cout << "Suhu dalam fahrenheit adalah " << f << " derajat" << endl;

    return 0;
}