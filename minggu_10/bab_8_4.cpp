#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string kalimat;
    char huruf;
    int frekuensi;

    cout << "Masukkan kalimat: ";
    cin >> kalimat;

    cout << "Masukkan huruf yang ingin dihitung: ";
    cin >> huruf;

    for (int i = 0; i < kalimat.length(); i++)
    {
        if (kalimat[i] == huruf)
        {
            frekuensi++;
        }
    }

    cout << "=========================================================  " << endl;
    cout << "Huruf " << huruf << " muncul sebanyak " << frekuensi << " kali" << endl;
}
