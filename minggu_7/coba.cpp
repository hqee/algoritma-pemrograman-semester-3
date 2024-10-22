#include <iostream>
using namespace std;

int main()
{
    int nilai_sekarang, nilai_sebelumnya;

    // Input nilai ujian sekarang dan sebelumnya
    cout << "Masukkan nilai ujian sekarang: ";
    cin >> nilai_sekarang;
    cout << "Masukkan nilai ujian sebelumnya: ";
    cin >> nilai_sebelumnya;

    // Menentukan apakah nilai tuntas atau tidak
    bool tuntas_sekarang = nilai_sekarang >= 65;
    bool tuntas_sebelumnya = nilai_sebelumnya >= 65;

    // Memberikan umpan balik berdasarkan skenario yang diberikan
    if (nilai_sekarang >= 90)
    {
        if (tuntas_sebelumnya)
        {
            cout << "Awesome! You did a really great job!" << endl;
        }
        else
        {
            cout << "Congratulations! You must have studied really hard, right?" << endl;
        }
    }
    else if (tuntas_sekarang && tuntas_sebelumnya)
    {
        cout << "Congratulations on passing the exam!" << endl;
    }
    else if (tuntas_sekarang || tuntas_sebelumnya)
    {
        cout << "Good job! At least you passed one exam!" << endl;
    }
    else
    {
        cout << "Better luck next time!" << endl;
    }

    return 0;
}