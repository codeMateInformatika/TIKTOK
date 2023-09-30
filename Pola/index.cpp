#include <iostream>
using namespace std;

int main()
{
    int jumlah_baris;

    cout << " PROGRAM POLA" << endl;
    cout << "==============" << endl;
    cout << "masukkan jumlah baris: ";
    cin >> jumlah_baris;

    cout << endl;
    for (int i = 1; i <= jumlah_baris; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "X ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= jumlah_baris; i++)
    {
        for (int j = jumlah_baris; j >= i; j--)
        {
            cout << "X ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= jumlah_baris; i++)
    {
        for (int j = 1; j <= jumlah_baris; j++)
        {
            if (j < i)
            {
                cout << "  ";
            }
            else
            {
                cout << "X ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= jumlah_baris; i++)
    {
        for (int j = 1; j <= jumlah_baris; j++)
        {
            if (j <= (jumlah_baris - i))
            {
                cout << "  ";
            }
            else
            {
                cout << "X ";
            }
        }
        cout << endl;
    }
}