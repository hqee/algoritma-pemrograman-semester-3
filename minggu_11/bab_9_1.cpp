#include <iostream>
using namespace std;

// deklarasi fungsi untuk melakukan selection sort
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Indeks elemen terkecil dalam unsorted part
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j; // Temukan indeks elemen terkecil
            }
        }
        // Tukar elemen terkecil yang ditemukan dengan elemen di posisi i
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main(int argc, char const *argv[])
{
    // inisialisasi array
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // memanggil fungsi selectionSort
    selectionSort(arr, n);

    // menampilkan array yang sudah diurutkan
    cout << "Array yang sudah diurutkan: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
