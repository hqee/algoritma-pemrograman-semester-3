/*
Nama   : Haqi Dhiya Firmana
NIM    : 23051130016
Kelas  : J
*/

#include <iostream>
using namespace std;

// mencari banyak kemunculan masing masing karakter
void char_hitung(char array[], int n)
{

    int count[256] = {0};

    for (int i = 0; i < n; i++)
    {
        count[(int)array[i]]++;
    }

    cout << "=====================================" << endl;

    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            cout << "Karakter '" << (char)i << "' muncul sebanyak " << count[i] << " kali." << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Masukkan besar array : ";
    cin >> n;

    char array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai array ke-" << i << " : ";
        cin >> array[i];
    }

    char_hitung(array, n);
    return 0;
}

/*
    Output:
        Masukkan besar array : 10
        Masukkan nilai array ke-0 : a
        Masukkan nilai array ke-1 : s
        Masukkan nilai array ke-2 : d
        Masukkan nilai array ke-3 : f
        Masukkan nilai array ke-4 : g
        Masukkan nilai array ke-5 : h
        Masukkan nilai array ke-6 : a
        Masukkan nilai array ke-7 : s
        Masukkan nilai array ke-8 : d
        Masukkan nilai array ke-9 : q
        =====================================
        Karakter 'a' muncul sebanyak 2 kali.
        Karakter 'd' muncul sebanyak 2 kali.
        Karakter 'f' muncul sebanyak 1 kali.
        Karakter 'g' muncul sebanyak 1 kali.
        Karakter 'h' muncul sebanyak 1 kali.
        Karakter 'q' muncul sebanyak 1 kali.
        Karakter 's' muncul sebanyak 2 kali.
*/