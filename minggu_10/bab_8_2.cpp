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
    // Menginisialisasi input string
    string input;

    // Meminta input dari user
    cout << "Masukkan input (maksimal 50 karakter): ";
    getline(cin, input);

    // Membatasi panjang input hingga 50 karakter
    if (input.length() > 50)
    {
        input = input.substr(0, 50);
    }

    // Menghilangkan semua spasi dalam input
    int space;
    while ((space = input.find(" ")) != string::npos)
    {
        input.erase(space, 1);
    }

    // Menampilkan hasil input setelah dihapus spasi
    cout << "Input setelah dihapus spasi: " << input << endl;

    return 0;
}

/*
Output :
    Masukkan input (maksimal 50 karakter): aku suka makan pisang
    Input setelah dihapus spasi: akusukamakanpisang
*/
