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
    cout << "Masukkan angka : ";
    cin >> n;

    if (n % 5 == 0 && n % 3 == 0)
    {
        cout << "Bilangan habis dibagi 5 dan 3" << endl;
    }
    else if (n % 5 == 0)
    {
        cout << "Bilangan habis dibagi 5" << endl;
    }
    else if (n % 3 == 0)
    {
        cout << "Bilangan habis dibagi 3" << endl;
    }
    else
    {
        cout << "Bilangan tidak habis dibagi 5 dan 3" << endl;
    }
}

/*
    Output :
    Masukkan angka : 15
    Bilangan habis dibagi 5 dan 3

    Masukkan angka : 9
    Bilangan habis dibagi 3

    Masukkan angka : 10
    Bilangan habis dibagi 5

    Masukkan angka : 11
    Bilangan tidak habis dibagi 5 dan 3
*/