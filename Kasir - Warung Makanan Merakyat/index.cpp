#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    // deklarasi dan mengisi menu makanan
    string menu[] = {
        "Mie Ayam",
        "Bakso   ",
        "Es Teh  ",
        "Es Jeruk",
    };
    // deklarasi dan mengisi harga menu
    double harga_menu[] = {
        10000, // harga mie ayam
        12000, // harga bakso
        13000, // harga es teh
        15000, // harga es jeruk
    };
    // deklarasi dan mengisi jumlah menu (digunakan saat menampilkan menu)
    int jumlah_menu = (sizeof(menu) / sizeof(*menu));

    // program utama
    cout << "+---------------------------------------+\n";
    cout << "|         WARUNG MAKANAN MERAKYAT       |\n";
    cout << "+---------------------------------------+\n";
    cout << "| Menu: \t\t\t\t|\n";
    // menampilkan menu makanan menggunakan perulangan
    for (int i = 0; i < jumlah_menu; i++)
    {
        cout << "| " << (i + 1) << ". " << menu[i] << "\t\t\t\t|\n";
    }
    cout << "+---------------------------------------+\n";

    // deklarasi variabel item untuk menyimpan item yang dibeli user
    int item;
    // deklarasi variabel banyak_item untuk menyimpan jumlah item yang dibeli user
    int banyak_item;
    // deklarasi variabel jumlah_pesanan untuk menghitung jumlah pesanan
    int jumlah_pesanan = 0;
    // deklarasi variabel untuk menyimpan semua pesanan
    int pesanan[jumlah_pesanan][3];

    cout << "\n Input Pesanan (Input 99 Jika Selesai)\t\n";

    // input barang untuk dibayar
    while (true)
    {
        cout << " masukkan nomor item: ";
        cin >> item;
        // menghentikan perulangan saat user memasukkan 99 (karena waktunya membayar)
        if (item == 99)
        {
            break;
        }
        cout << " jumlah " << menu[item - 1] << ": ";
        cin >> banyak_item;
        long total_per_item = harga_menu[item - 1] * banyak_item;
        cout << " " << menu[item - 1] << " x " << banyak_item << endl;
        // menyimpan kode menu dalam variabel pesanan
        pesanan[jumlah_pesanan][0] = item - 1;
        // menyimpan jumlah item dalam variabel pesanan
        pesanan[jumlah_pesanan][1] = banyak_item;
        // menyimpan total per item dalam variabel pesanan
        pesanan[jumlah_pesanan][2] = total_per_item;
        // increment jumlah pesanan
        jumlah_pesanan++;
        cout << endl;
    }

    cout << endl;

    // deklarasi uang_pelanggan dan uang_kembalian
    long uang_pelanggan, kembalian;
    // deklarasi dan mengisi variabel total_semua
    long total_semua = 0;
    for (int i = 0; i < jumlah_pesanan; i++)
    {
        // memasukkan ke variabel total_semua
        total_semua += pesanan[i][2];
    }

    cout << " Total Semua: " << total_semua << endl;
    cout << " Bayar: ";
    cin >> uang_pelanggan;
    kembalian = uang_pelanggan - total_semua;

    cout << endl;
    // Mendapatkan waktu saat ini
    time_t now = time(0);

    // Mengonversi waktu ke struktur tm (tanggal dan waktu terperinci)
    tm *date = localtime(&now);

    // Mendapatkan tanggal dari struktur tm
    int year = date->tm_year + 1900; // Tahun dimulai dari 1900
    int month = date->tm_mon + 1;    // Bulan dimulai dari 0
    int day = date->tm_mday;         // Tanggal dalam bulan

    // Format waktu sesuai dengan yang diinginkan
    ostringstream waktu_stream;
    waktu_stream << setfill('0') << setw(2) << day << '/'
                 << setfill('0') << setw(2) << month << '/'
                 << year;

    string nama_kasir = "Codemate";
    string waktu_sekarang = waktu_stream.str();

    // cetak struk
    cout << "+---------------------------------------+\n";
    cout << "|         WARUNG MAKANAN MERAKYAT       |\n";
    cout << "|                                       |\n";
    cout << "| Kasir   : " << nama_kasir << "\t\t\t|\n";
    cout << "| Tanggal : " << waktu_sekarang << "\t\t\t|\n";
    cout << "+---------------+-------+----+----------+\n";
    for (int i = 0; i < jumlah_pesanan; i++)
    {
        string nama_item = menu[pesanan[i][0]];
        double harga = harga_menu[pesanan[i][0]];
        cout << "| " << nama_item << "\t| " << harga << " | x" << pesanan[i][1] << " |  " << pesanan[i][2] << "\t|" << endl;
    }
    cout << "+---------------+-------+----+----------+\n";
    cout << "| Total Semua\t\t\t" << total_semua << "\t|" << endl;
    cout << "+---------------------------------------+\n";
    cout << "| Uang Pelanggan\t\t" << uang_pelanggan << "\t|" << endl;
    cout << "| Kembalian\t\t\t" << kembalian << "\t|" << endl;
    cout << "+---------------------------------------+\n";
    cout << "|     Terima Kasih telah belanja di     |\n";
    cout << "|         WARUNG MAKANAN MERAKYAT       |\n";
    cout << "+---------------------------------------+\n";
}