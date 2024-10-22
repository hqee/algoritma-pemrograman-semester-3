#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];

    cout << "Masukkan elemen matriks 3x3 : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukkan elemen matriks [" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatriks yang dimasukkan adalah : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nHasil penjumlahan elemen matriks adalah : " << endl;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
    }
    cout << sum << endl;

    cout << "\nHasil perkalian elemen matriks adalah : " << endl;
    int product = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product *= matrix[i][j];
        }
    }
    cout << product << endl;

    return 0;
}
