/*
Nama   : Haqi Dhiya Firmana
NIM    : 23051130016
Kelas  : J
*/

#include <iostream>
#include <algorithm>
using namespace std;

// fungsi untuk mencari nilai maksimum
int max(int array[], int n)
{
    int max = *max_element(array, array + n);
    return max;
}

// fungsi untuk mencari nilai minimum
int min(int array[], int n)
{
    int min = *min_element(array, array + n);
    return min;
}

// fungsi untuk mencari nilai rata-rata
int rata_rata(int array[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    int avg = sum / n;
    return avg;
}

// fungsi untuk mencari standar deviasi
int dev(int array[], int n)
{
    int sum_dev = 0;
    for (int i = 0; i < n; i++)
    {
        sum_dev += (array[i] - rata_rata(array, n)) * (array[i] - rata_rata(array, n));
    }
    int dev = sum_dev / n;
    return dev;
}

// fungsi untuk mencari median
int median(int array[], int n)
{
    sort(array, array + n);
    int median = array[n / 2];
    return median;
}

// fungsi untuk mencari modus
int modus(int array[], int n)
{
    int modus = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp_count = 0;
        for (int j = 0; j < n; j++)
        {
            if (array[i] == array[j])
            {
                temp_count++;
            }
        }
        if (temp_count > count)
        {
            count = temp_count;
            modus = array[i];
        }
    }
    return modus;
}

int main(int argc, char const *argv[])
{
    int array[5];

    // meminta input untuk array
    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan nilai array ke-" << i << " : ";
        cin >> array[i];
    }

    // memanggil fungsi
    int nilai_max = max(array, 5);
    int nilai_min = min(array, 5);
    int rata2 = rata_rata(array, 5);
    int deviation = dev(array, 5);
    int med = median(array, 5);
    int mod = modus(array, 5);

    cout << "======================\n";

    // menampilkan hasil
    cout << "Nilai max: " << nilai_max << endl;
    cout << "Nilai min: " << nilai_min << endl;
    cout << "Nilai rata-rata: " << rata2 << endl;
    cout << "Standar deviasi: " << deviation << endl;
    cout << "Median: " << med << endl;
    cout << "Modus: " << mod << endl;
}

/*
    Output:
        Masukkan nilai array ke-0 : 12
        Masukkan nilai array ke-1 : 23
        Masukkan nilai array ke-2 : 12
        Masukkan nilai array ke-3 : 3
        Masukkan nilai array ke-4 : 54
        ======================
        Nilai max: 54
        Nilai min: 3
        Nilai rata-rata: 20
        Standar deviasi: 316
        Median: 12
        Modus: 12
*/