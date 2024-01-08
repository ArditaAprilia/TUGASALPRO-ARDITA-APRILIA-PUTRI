#include <iostream>
#include <cmath>

using namespace std;

double luasPersegi(double sisi) {
    return sisi * sisi;
}

double luasLingkaran(double jariJari) {
    return M_PI * pow(jariJari, 2);
}

double luasPersegiPanjang(double panjang, double lebar) {
    return panjang * lebar;
}

int main() {
    double sisiPersegi, jariJariLingkaran, panjangPersegiPanjang, lebarPersegiPanjang;

    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisiPersegi;
    
    cout << "Luas Persegi: " << luasPersegi(sisiPersegi) << endl;
    cout<<endl;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJariLingkaran;
    
    cout << "Luas Lingkaran: " << luasLingkaran(jariJariLingkaran) << endl;
    cout<<endl;
    cout << "Masukkan panjang persegi panjang: ";
     cin >> panjangPersegiPanjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebarPersegiPanjang;

    cout << "Luas Persegi Panjang: " << luasPersegiPanjang(panjangPersegiPanjang, lebarPersegiPanjang) << endl;
    cout<<endl;
    return 0;
}
    
    
    
    
