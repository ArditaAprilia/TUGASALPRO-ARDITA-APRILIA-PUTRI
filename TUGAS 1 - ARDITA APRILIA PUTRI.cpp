#include <iostream>

using namespace std;

int main() {
    int A, B;

    cout << "Masukkan nilai A: ";
    cin >> A;

    cout << "Masukkan nilai B: ";
    cin >> B;

    if (A % 2 == 1 && B % 2 == 0) {
        cout << "Nilai A (" << A << ") adalah bilangan ganjil, dan nilai B (" << B << ") adalah bilangan genap." << endl;
    } else {
        cout << "Kondisi tidak memenuhi syarat." << endl;
    }

    return 0;
}
