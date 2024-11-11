/*
Nama   : Haqi Dhiya Firmana
NIM    : 23051130016
Kelas  : J
*/

#include <iostream>
using namespace std;

void insertion_sort_ascending(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Rp." << arr[i] << endl;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {
        45000, 30000, 60000, 20000, 50000};

    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort_ascending(arr, n);
    print_array(arr, n);

    return 0;
}

/*
    Output:
        Rp.20000
        Rp.30000
        Rp.45000
        Rp.50000
        Rp.60000
*/
