#include <iostream>
using namespace std;

int main()
{
    int umur;

    cout << "Masukkan umur anda: ";
    cin >> umur;

    if (umur <= 100 && umur > 0)
    {
        cout << "Umur anda adalah " << umur << " tahun" << endl;
    }
    else
    {
        cout << "Umur yang anda masukkan tidak valid" << endl;
    }
    return 0;
}

/*
    Output:
    Masukkan umur anda: 50
    Umur anda adalah 50 tahun
*/
