/*
    Nama    : Haqi Dhiya Firmana
    NIM     : 23051130016
    Kelas   : J2
*/

#include <iostream>
using namespace std;

double hitung_bmi(double berat, double tinggi)
{
    double tinggi_m = tinggi / 100;
    return berat / (tinggi_m * tinggi_m);
}

void klasifikasi_bmi(double bmi)
{
    if (bmi < 18.5)
    {
        cout << "Kurang berat badan";
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        cout << "Normal";
    }
    else if (bmi >= 25 && bmi < 30)
    {
        cout << "Berlebih (Overweight)";
    }
    else
    {
        cout << "Obesitas";
    }
}

int main()
{
    double berat, tinggi, bmi;

    cout << "Masukkan berat badan (kg) : ";
    cin >> berat;
    cout << "Masukkan tinggi badan (cm) : ";
    cin >> tinggi;

    bmi = hitung_bmi(berat, tinggi);
    cout << "BMI Anda adalah " << bmi << " dan termasuk dalam kategori ";
    klasifikasi_bmi(bmi);
}