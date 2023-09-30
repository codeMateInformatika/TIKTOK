#include <iostream>
using namespace std;

int main()
{
    int tinggi_segitiga;

    cout << "SEGITIGA SAMA KAKI" << endl;
    cout << "==================" << endl;
    cout << "masukkan tinggi segitiga: ";
    cin >> tinggi_segitiga;

    cout << endl;
    int panjang_segitiga = tinggi_segitiga + (tinggi_segitiga - 1);

    for (int i = 0; i < tinggi_segitiga; i++)
    {
        int tengah = (panjang_segitiga / 2);
        for (int j = 1; j <= panjang_segitiga; j++)
        {
            if (j <= (tengah - i))
            {
                cout << " ";
            }
            else if (j > tengah + 1)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}