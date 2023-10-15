#include <iostream>
using namespace std;

int main() {
    char operatorChar; // Mengganti nama variabel "operator" menjadi "operatorChar"
    double angka1, angka2;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operatorChar; // Mengganti "operator" menjadi "operatorChar"

    cout << "Masukkan dua angka: ";
    cin >> angka1 >> angka2;

    switch (operatorChar) { // Mengganti "operator" menjadi "operatorChar"
        case '+':
            cout << angka1 << " + " << angka2 << " = " << angka1 + angka2;
            break;
        case '-':
            cout << angka1 << " - " << angka2 << " = " << angka1 - angka2;
            break;
        case '*':
            cout << angka1 << " * " << angka2 << " = " << angka1 * angka2;
            break;
        case '/':
            if (angka2 != 0) {
                cout << angka1 << " / " << angka2 << " = " << angka1 / angka2;
            } else {
                cout << "Tidak dapat melakukan pembagian dengan nol.";
            }
            break;
        default:
            cout << "Operator yang dimasukkan tidak valid.";
            break;
    }

    return 0;
}

