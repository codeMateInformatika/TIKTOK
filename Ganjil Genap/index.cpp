#include <iostream>
using namespace std;

int main()
{
    int input_user;

    cout << "PROGRAM PENGECEKAN BILANGAN GANJIL DAN GENAP" << endl;
    cout << "============================================" << endl;
    cout << "masukkan bilangan: ";
    cin >> input_user;

    if (input_user % 2 == 0)
    {
        cout << "bilangan yang anda inputkan GENAP" << endl;
    }
    else
    {
        cout << "bilangan yang anda inputkan GANJIL" << endl;
    }
}