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

    cout << "Hasil Operasi: " << endl;
    cout << bilangan_1 << " + " << bilangan_2 << " = " << bilangan_1 + bilangan_2 << endl;
    cout << bilangan_1 << " - " << bilangan_2 << " = " << bilangan_1 - bilangan_2 << endl;
    cout << bilangan_1 << " x " << bilangan_2 << " = " << bilangan_1 * bilangan_2 << endl;
    cout << bilangan_1 << " / " << bilangan_2 << " = " << bilangan_1 / bilangan_2 << endl;
}
