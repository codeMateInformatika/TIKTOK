#include <iostream>
using namespace std;

int main()
{
    double hasil, nominal;
    int pilihan;

    cout << "KONVERSI MATA UANG" << endl;
    cout << "==================" << endl;
    cout << "1. Dolar ke rupiah" << endl;
    cout << "2. Rupiah ke dolar" << endl;
    cout << ">> ";
    cin >> pilihan;

    cout << "masukkan nominal yang ingin dikonversi: ";
    cin >> nominal;

    switch (pilihan)
    {
    case 1:
        hasil = nominal * 15401.00;
        cout << nominal << " Dolar = " << hasil << " Rupiah" << endl;
        break;
    case 2:
        hasil = nominal * 0.000065;
        cout << nominal << " Rupiah = " << hasil << " Dolar" << endl;
        break;
    }
}