#include <iostream>
using namespace std;

int main()
{
    int bilangan_1;
    int bilangan_2;
    int hasil;
    char aksi_operator;

    cout << "KALKULATOR SEDERHANA" << endl;
    cout << "====================" << endl;

    cout << "masukkan bilangan pertama: ";
    cin >> bilangan_1;
    cout << "silahkan pilih operator[+, -, *, /]: ";
    cin >> aksi_operator;
    cout << "masukkan bilangan kedua: ";
    cin >> bilangan_2;

    if (aksi_operator == '+')
    {
        hasil = bilangan_1 + bilangan_2;
    }
    else if (aksi_operator == '-')
    {
        hasil = bilangan_1 - bilangan_2;
    }
    else if (aksi_operator == '*')
    {
        hasil = bilangan_1 * bilangan_2;
    }
    else if (aksi_operator == '/')
    {
        hasil = bilangan_1 / bilangan_2;
    }
    else
    {
        cout << "operator yang anda masukkan tidak valid" << endl;
        // menghentikan program
        return 0;
    }

    cout << "Hasil: " << endl;
    cout << bilangan_1 << " " << aksi_operator << " " << bilangan_2 << " = " << hasil;
}