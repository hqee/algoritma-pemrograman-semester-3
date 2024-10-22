/*
Nama   : Haqi Dhiya Firmana
NIM    : 23051130016
Kelas  : J
*/

#include <iostream>
using namespace std;

int main()
{
    int a[3] = {1, 2, 3};
    int b[3];

    // menyalin elemen array a ke array b
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }

    // menampilkan array b dengan posisi terbalik
    for (int a = 2; a >= 0; a--)
    {
        cout << b[a] << ", ";
    }
    cout << endl;
}

/*
Output:
3, 2, 1,
*/