#include <iostream>
using namespace std;

int main()
{
    double celcius, fahrenheit, kelvin, reaumur, suhu;
    int pilihan;

    cout << "KONVERSI SUHU SEDERHANA" << endl;
    cout << "=======================" << endl;

    cout << "1. Konversi Celcius" << endl;
    cout << "2. Konversi Fahrenheit" << endl;
    cout << "3. Konversi Kelvin" << endl;
    cout << "4. Konversi Reaumur" << endl;
    cout << ">> ";
    cin >> pilihan;

    cout << "masukkan suhu: ";
    cin >> suhu;

    if (pilihan == 1)
    {
        fahrenheit = (suhu * 9 / 5) + 32;
        kelvin = suhu + 273.15;
        reaumur = suhu * 4 / 5;
        cout << suhu << " Derajat Celcius = " << fahrenheit << " Derajat Fahrenheit" << endl;
        cout << "\t\t   = " << kelvin << " Derajat Kelvin" << endl;
        cout << "\t\t   = " << reaumur << " Derajat Reaumur" << endl;
    }
    else if (pilihan == 2)
    {
        celcius = (suhu - 32) * 5 / 9;
        kelvin = (suhu + 459.67) * 5 / 9;
        reaumur = (suhu - 32) * 4 / 9;
        cout << suhu << " Derajat Fahrenheit = " << celcius << " Derajat Celcius" << endl;
        cout << "\t\t      = " << kelvin << " Derajat Kelvin" << endl;
        cout << "\t\t      = " << reaumur << " Derajat Reaumur" << endl;
    }
    else if (pilihan == 3)
    {
        celcius = suhu - 273.5;
        fahrenheit = suhu * 9 / 5 - 459.67;
        reaumur = (suhu - 273.15) * 4 / 5;
        cout << suhu << " Derajat Kelvin = " << celcius << " Derajat Celcius" << endl;
        cout << "\t\t  = " << fahrenheit << " Derajat Fahrenheit" << endl;
        cout << "\t\t  = " << reaumur << " Derajat Reaumur" << endl;
    }
    else if (pilihan == 4)
    {
        celcius = suhu * 5 / 4;
        fahrenheit = suhu * 9 / 4 + 32;
        kelvin = suhu * 5 / 4 + 273.15;
        cout << suhu << " Derajat Reaumur = " << celcius << " Derajat Celcius" << endl;
        cout << "\t\t   = " << fahrenheit << " Derajat Fahrenheit" << endl;
        cout << "\t\t   = " << kelvin << " Derajat Kelvin" << endl;
    }
}