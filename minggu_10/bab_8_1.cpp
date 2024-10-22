#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string kalimat1, kalimat2;

    cout << "Masukkan kalimat pertama: ";
    getline(cin, kalimat1);

    cout << "Masukkan kalimat kedua: ";
    getline(cin, kalimat2);

    cout << "=========================================================  " << endl;
    kalimat1.length() > kalimat2.length() ? cout << "Kalimat pertama lebih panjang" : cout << "Kalimat kedua lebih panjang";
}
