#include <iostream>
using namespace std;

int main()
{
    int barang, nominal;
    cout << "Masukkan jumlah barang yang akan dibeli : ";
    cin >> barang;
    cout << "Masukkan nominal transaksi : ";
    cin >> nominal;

    if (nominal >= 500000 && barang > 5)
    {
        cout << "Selamat, anda mendapatkan 1 buah setrika" << endl;
    }
    else if (nominal >= 100000 && barang > 3)
    {
        cout << "Selamat, anda mendapatkan 1 buah payung" << endl;
    }
    else if (nominal >= 50000 || barang > 2)
    {
        cout << "Selamat, anda mendapatkan 1 buah bolpoin" << endl;
    }
    else
    {
        cout << "Maaf, anda tidak mendapatkan hadiah" << endl;
    }
    return 0;
}

/*
Output:
Masukkan jumlah barang yang akan dibeli : 5
Masukkan nominal transaksi : 200000
Selamat, anda mendapatkan 1 buah payung
*/