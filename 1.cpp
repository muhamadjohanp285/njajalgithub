#include <iostream>
using namespace std;

int main() {
    double harga, diskon, jumlahdiskon, hargasetelahdiskon;

    cout << "\n=== Program Perhitungan Diskon Barang ===" << endl;

    cout << "\nMasukkan :" << endl;
    cout << "Harga barang (Rp) = Rp." ;
    cin >> harga;

    cout << "Masukkan diskon (%) = ";
    cin >> diskon;

    jumlahdiskon = harga - (harga * diskon / 100);

    cout << "\nHasil :" << endl;
    cout << "Jumlah diskon = Rp." << harga * diskon / 100 << endl;
    cout << "Harga setelah diskon = Rp." << jumlahdiskon << endl;

    return 0;
}

