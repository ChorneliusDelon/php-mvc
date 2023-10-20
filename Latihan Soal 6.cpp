#include <iostream>
using namespace std;

int main() {
    int bilangan1, bilangan2, bilangan3;

    cout << "Masukkan bilangan ke-1: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan ke-2: ";
    cin >> bilangan2;
    cout << "Masukkan bilangan ke-3: ";
    cin >> bilangan3;

    int terbesar, terkecil;

    // Menentukan bilangan terbesar
    if (bilangan1 >= bilangan2 && bilangan1 >= bilangan3) {
        terbesar = bilangan1;
    } else if (bilangan2 >= bilangan1 && bilangan2 >= bilangan3) {
        terbesar = bilangan2;
    } else {
        terbesar = bilangan3;
    }

    // Menentukan bilangan terkecil
    if (bilangan1 <= bilangan2 && bilangan1 <= bilangan3) {
        terkecil = bilangan1;
    } else if (bilangan2 <= bilangan1 && bilangan2 <= bilangan3) {
        terkecil = bilangan2;
    } else {
        terkecil = bilangan3;
    }

    cout << "Bilangan Terbesar adalah: " << terbesar << endl;
    cout << "Bilangan Terkecil adalah: " << terkecil << endl;

    if (terbesar > 0) {
        cout << "Bilangan terbesar adalah positif" << endl;
    } else if (terbesar < 0) {
        cout << "Bilangan terbesar adalah negatif" << endl;
    } else {
        cout << "Bilangan terbesar adalah nol" << endl;
    }
}