/*
    Nama    : Haqi Dhiya Firmana
    Kelas  : J2
    NIM     : 23051130016
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan angka yang akan dikonversi ke huruf : ";
    cin >> n;

    if (n >= 80 && n <= 100)
    {
        cout << "A" << endl;
    }
    else if (n >= 65 && n < 80)
    {
        cout << "B" << endl;
    }
    else if (n >= 50 && n < 65)
    {
        cout << "C" << endl;
    }
    else if (n >= 35 && n < 50)
    {
        cout << "D" << endl;
    }
    else if (n < 35 && n >= 0)
    {
        cout << "E" << endl;
    }
    else
    {
        cout << "Nilai yang anda masukkan tidak valid" << endl;
    }
}