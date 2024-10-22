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

    // menampilkan array b
    for (int i = 0; i < 3; i++)
    {
        cout << b[i] << ", ";
    }
    cout << endl;
}
