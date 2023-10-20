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

    switch (operasi) {
        case '+':
            hasil = bilangan1 + bilangan2;
            break;
        case '-':
            hasil = bilangan1 - bilangan2;
            break;
        case '*':
            hasil = bilangan1 * bilangan2;
            break;
        case '/':
            if (bilangan2 != 0) {
                hasil = static_cast<double>(bilangan1) / bilangan2;
            } else {
                cout << "Error: Pembagian dengan nol." << endl;
                return 1;
            }
            break;
        default:
            cout << "Operator tidak valid." << endl;
            return 1;
    }

    cout << "Hasil operasi aritmatika: " << hasil << endl;

    return 0;
}