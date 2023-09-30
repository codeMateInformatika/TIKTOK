#include <iostream>
using namespace std;

int main()
{
    string kalimat;
    char kalimat_dibalik[100] = "";

    cout << "PROGRAM MEMBALIK KALIMAT" << endl;
    cout << "========================" << endl;
    cout << "masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    int index = kalimat.length() - 1;
    for (int i = 0; i < kalimat.length(); i++)
    {
        kalimat_dibalik[i] = kalimat[index];
        index--;
    }

    cout << "HASIL = " << kalimat_dibalik;
}