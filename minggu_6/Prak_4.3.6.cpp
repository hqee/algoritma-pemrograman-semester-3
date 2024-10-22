#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int menu;
    cout << "Pilih jenis bangun datar yang akan dihitung luasnya : \n";
    cout << "1. Persegi panjang\n";
    cout << "2. Segitiga\n";
    cout << "3. Lingkaran\n";
    cout << "4. Batal\n";
    cout << "Masukkan pilihan anda : ";
    cin >> menu;

    switch (menu)
    {
    case 1:
    {
        float panjang, lebar, luas;
        cout << "Masukkan panjang persegi panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang : ";
        cin >> lebar;
        luas = panjang * lebar;
        cout << "Luas persegi panjang adalah " << luas << endl;
        break;
    }
    case 2:
    {
        float alas, tinggi, luas;
        cout << "Masukkan alas segitiga : ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga : ";
        cin >> tinggi;
        luas = 0.5 * alas * tinggi;
        cout << "Luas segitiga adalah " << luas << endl;
        break;
    }
    case 3:
    {
        float jari_jari, luas;
        cout << "Masukkan jari-jari lingkaran : ";
        cin >> jari_jari;
        luas = M_PI * jari_jari * jari_jari;
        cout << "Luas lingkaran adalah " << luas << endl;
        break;
    }
    case 4:
        cout << "Anda memilih untuk keluar" << endl;
        break;
    default:
        cout << "Pilihan yang anda masukkan tidak valid" << endl;
    }
}
/*
    Output:
    Pilih jenis bangun datar yang akan dihitung luasnya :
    1. Persegi panjang
    2. Segitiga
    3. Lingkaran
    4. Batal
    Masukkan pilihan anda : 3
    Masukkan jari-jari lingkaran : 15
    Luas lingkaran adalah 706.858
*/