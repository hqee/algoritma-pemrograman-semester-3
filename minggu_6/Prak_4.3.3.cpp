/*
    Nama    : Haqi Dhiya Firmana
    Kelas  : J2
    NIM     : 23051130016
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Masukkan nilai sisi a : ";
    cin >> a;
    cout << "Masukkan nilai sisi b : ";
    cin >> b;
    cout << "Masukkan nilai sisi c : ";
    cin >> c;

    if (a == b && b == c)
    {
        cout << "Segitiga tersebut adalah segitiga sama sisi" << endl;
    }
    else if (a == b || b == c || a == c)
    {
        cout << "Segitiga tersebut adalah segitiga sama kaki" << endl;
    }
    else
    {
        cout << "Segitiga tersebut adalah segitiga sembarang" << endl;
    }
}

/*
    Output :
    Masukkan nilai sisi a : 9
    Masukkan nilai sisi b : 9
    Masukkan nilai sisi c : 9
    Segitiga tersebut adalah segitiga sama sisi
*/