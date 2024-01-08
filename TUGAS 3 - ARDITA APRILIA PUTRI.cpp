#include <iostream>

using namespace std;

int main() {
    int pilihan;
    int jumlahTiket;
    double hargaPerTiket;
    double totalHarga;

    cout << "Pilihan Tiket:\n";
    cout << "1. Ekonomi (100ribu/tiket)\n";
    cout << "2. Bisnis (200ribu/tiket)\n";
    cout << "3. Eksekutif (300ribu/tiket)\n";

    cout << "Pilih jenis tiket (1-3): ";
    cin >> pilihan;

    cout << "Masukkan jumlah tiket: ";
    cin >> jumlahTiket;

    switch (pilihan) {
        case 1:
            hargaPerTiket = 100000;
            break;
        case 2:
            hargaPerTiket = 200000;
            break;
        case 3:
            hargaPerTiket = 300000;
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            return 1;
    }

    totalHarga = jumlahTiket * hargaPerTiket;

    if (totalHarga > 500000) {
        totalHarga *= 0.9;  // Potongan 10%
    } else if (totalHarga > 300000) {
        totalHarga *= 0.95;  // Potongan 5%
    } else if (totalHarga > 200000) {
        totalHarga *= 0.98;  // Potongan 2%
    }

    cout << "Total harga yang harus dibayar: " << totalHarga << " ribu rupiah\n";

    return 0;
}
