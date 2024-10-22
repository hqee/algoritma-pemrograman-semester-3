/*
    Nama    : Haqi Dhiya Firmana
    NIM     : 23051130016
    Kelas   : J2
*/

#include <iostream>
using namespace std;

int main()
{
    int jmlh_pengiriman;
    double jarak_pengiriman, total_jarak_harian, total_jarak_mingguan = 0;

    for (int hari = 1; hari <= 7; hari++)
    {
        total_jarak_harian = 0; // Reset total jarak harian setiap hari
        cout << "Masukkan data pengiriman untuk hari ke-" << hari << endl;
        cout << "--------------------------------------" << endl;
        cout << "Masukkan Jumlah pengiriman : ";
        cin >> jmlh_pengiriman;

        for (int i = 1; i <= jmlh_pengiriman; i++)
        {
            cout << "Masukkan jarak pengiriman ke-" << i << " : ";
            cin >> jarak_pengiriman;
            total_jarak_harian += jarak_pengiriman;
        }

        cout << "Total jarak pengiriman pada hari ke-" << hari << " adalah " << total_jarak_harian << " km" << endl;
        cout << "--------------------------------------" << endl;
        cout << "";

        total_jarak_mingguan += total_jarak_harian; // Tambahkan jarak harian ke total mingguan
    }

    cout << "--------------------------------------" << endl;
    cout << "Total jarak pengiriman mingguan adalah " << total_jarak_mingguan << " km" << endl;

    return 0;
}