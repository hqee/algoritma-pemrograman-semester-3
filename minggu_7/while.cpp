#include <iostream>
using namespace std;

int main()
{
    int ayam;

    cout << "Masukkan jumlah ayam : ";
    cin >> ayam;

    while (ayam > 0)
    {
        cout << "Anak ayam turun " << ayam << endl;
        ayam--;
        cout << "Mati satu tinggal " << ayam << endl;
        if (ayam == 0)
        {
            cout << "Anak ayam habis" << endl;
        }
    }
}