#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama_lengkap;

    cout << "Masukkan nama lengkap: ";
    getline(cin, nama_lengkap);

    int space = nama_lengkap.find(" ");

    if (space == -1)
    {
        cout << "Format nama tidak sesuai" << endl;
        return 0;
    }

    string nama_depan = nama_lengkap.substr(0, space);
    string nama_belakang = nama_lengkap.substr(space + 1);

    cout << "Format nama : " << nama_depan[0] << ". " << nama_belakang << endl;
}
