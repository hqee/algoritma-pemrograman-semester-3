/*
    Nama    : Haqi Dhiya Firmana
    NIM     : 23051130016
    Kelas   : J2
*/

#include <iostream>
using namespace std;

int main()
{
    int nilai_lama, nilai_sekarang;

    cout << "Masukkan nilai ujian sekarang : ";
    cin >> nilai_sekarang;
    cout << "Masukkan nilai ujian sebelumnya : ";
    cin >> nilai_lama;

    if (nilai_sekarang >= 90 && nilai_lama >= 65)
    {
        cout << "Awesome! You did a really great job!";
    }
    else if (nilai_sekarang >= 90 && nilai_lama <= 65)
    {
        cout << "Congratulations! You must have studied really hard, right?";
    }
    else if (nilai_sekarang >= 65 && nilai_sekarang < 90 && nilai_lama >= 65 && nilai_lama < 90)
    {
        cout << "Congratulations on passing the exam!";
    }
    else if (nilai_sekarang >= 65 || nilai_lama >= 65)
    {
        cout << "Good job! At least you passed one exam!";
    }
    else
    {
        cout << "Better luck next time!";
    }
}