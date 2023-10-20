#include <iostream>
using namespace std;

int main() {
    int bilangan1, bilangan2;
    char operasi;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    double hasil;

    if (operasi == '+') {
        hasil = bilangan1 + bilangan2;
    } else if (operasi == '-') {
        hasil = bilangan1 - bilangan2;
    } else if (operasi == '*') {
        hasil = bilangan1 * bilangan2;
    } else if (operasi == '/') {
        if (bilangan2 != 0) {
            hasil = static_cast<double>(bilangan1) / bilangan2;
        } else {
            cout << "Error: Pembagian dengan nol." << endl;
            return 1;
        }
    } else {
        cout << "Operator tidak valid." << endl;
        return 1;
    }

    cout << "Hasil operasi aritmatika: " << hasil << endl;
}
