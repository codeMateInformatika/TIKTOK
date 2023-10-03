#include <iostream>
using namespace std;

int main()
{
    int pilihan;
    cout << "PROGRAM MENAMPILKAN BILANGAN GANJIL ATAU GENAP" << endl;
    cout << "==============================================" << endl;
    cout << "1. Tampilkan Bilangan Ganjil" << endl;
    cout << "2. Tampilkan Bilangan Genap" << endl;
    cout << ">> ";
    cin >> pilihan;

    int dari, sampai;
    cout << "dari: ";
    cin >> dari;
    cout << "sampai: ";
    cin >> sampai;

    if (pilihan == 1)
    {
        cout << "Bilangan ganjil dari " << dari << " - " << sampai << ": " << endl;
        for (int i = dari; i <= sampai; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << " ";
            }
        }
    }
    else if (pilihan == 2)
    {
        cout << "Bilangan genap dari " << dari << " - " << sampai << ": " << endl;
        for (int i = dari; i <= sampai; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
            }
        }
    }
}