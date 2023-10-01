#include <iostream>
using namespace std;

int main()
{
    int harga_barang, jumlah_barang;
    cout << "    PROGRAM KASIR SEDERHANA" << endl;
    cout << "===============================" << endl;
    cout << "Masukkan harga barang  : ";
    cin >> harga_barang;
    cout << "Masukkan jumlah barang : ";
    cin >> jumlah_barang;

    long total = harga_barang * jumlah_barang;
    int pembayaran, kembalian;

    cout << "===============================" << endl;
    cout << "Total                  : " << total << endl;
    cout << "Input Pembayaran       : ";
    cin >> pembayaran;
    cout << "===============================" << endl;
    kembalian = pembayaran - total;
    cout << "Kembali                : " << kembalian << endl;
}