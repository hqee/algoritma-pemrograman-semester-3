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

void insertion_sort_descending(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key)
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
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {23, 05, 11, 30, 01, 6, 26, 04, 20, 04};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array yang terbentuk (ascending) : \n";
    insertion_sort_ascending(arr, n);
    print_array(arr, n);

    cout << "\n";

    cout << "Array yang terbentuk (descending) : \n";
    insertion_sort_descending(arr, n);
    print_array(arr, n);

    return 0;
}

/*
    Output :
        Array yang terbentuk (ascending) :
        1 4 4 5 6 11 20 23 26 30

        Array yang terbentuk (descending) :
        30 26 23 20 11 6 5 4 4 1
*/