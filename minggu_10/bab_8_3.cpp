/*
Nama   : Haqi Dhiya Firmana
NIM    : 23051130016
Kelas  : J
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // inisialisasi input string
    string input;

    // meminta input dari user
    cout << "Masukkan input kalimat : ";
    getline(cin, input);

    size_t a = input.find("a");

    // mengganti a dengan o
    while (a != string::npos)
    {
        input.replace(a, 1, "o");
        a = input.find("a");
    }

    cout << "Kalimat setelah mengganti a dengan o: " << input << endl;

    return 0;
}

/*
    Output:
        Masukkan input kalimat : aku suka makan pisang
        Kalimat setelah mengganti a dengan o: oku suko mokon pisong
*/
