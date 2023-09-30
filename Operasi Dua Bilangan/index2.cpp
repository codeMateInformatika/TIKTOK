#include <iostream>
using namespace std;

int main()
{
    int bilangan_1;
    int bilangan_2;

    cout << "masukkan bilangan pertama: ";
    cin >> bilangan_1;

    cout << "masukkan bilangan kedua: ";
    cin >> bilangan_2;

    int hasil_tambah = bilangan_1 + bilangan_2;
    int hasil_kurang = bilangan_1 - bilangan_2;
    int hasil_kali = bilangan_1 * bilangan_2;
    int hasil_bagi = bilangan_1 / bilangan_2;

    cout << "Hasil Operasi: " << endl;
    cout << bilangan_1 << " + " << bilangan_2 << " = " << hasil_tambah << endl;
    cout << bilangan_1 << " - " << bilangan_2 << " = " << hasil_kurang << endl;
    cout << bilangan_1 << " x " << bilangan_2 << " = " << hasil_kali << endl;
    cout << bilangan_1 << " / " << bilangan_2 << " = " << hasil_bagi << endl;
}
