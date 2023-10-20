#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int pilihan;
    
    cout << "Pilih bentuk yang akan dihitung: \n";
    cout << "1. Lingkaran\n";
    cout << "2. Segitiga\n";
    cout << "3. Persegi Panjang\n";
    cin >> pilihan;
    
    double hasil;
    
    switch (pilihan) {
        case 1: // Lingkaran
            double jari_jari;
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> jari_jari;
            hasil = M_PI * pow(jari_jari, 2);
            cout << "Luas lingkaran: " << hasil << endl;
            break;
        case 2: // Segitiga
            double alas, tinggi;
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            hasil = 0.5 * alas * tinggi;
            cout << "Luas segitiga: " << hasil << endl;
            break;
        case 3: // Persegi Panjang
            double panjang, lebar;
            int operasi;
            cout << "Pilih operasi: \n";
            cout << "1. Menghitung luas\n";
            cout << "2. Menghitung keliling\n";
            cin >> operasi;
            
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            
            if (operasi == 1) {
                hasil = panjang * lebar;
                cout << "Luas persegi panjang: " << hasil << endl;
            } else if (operasi == 2) {
                hasil = 2 * (panjang + lebar);
                cout << "Keliling persegi panjang: " << hasil << endl;
            } else {
                cout << "Pilihan operasi tidak valid." << endl;
            }
            break;
        default:
            cout << "Pilihan bentuk tidak valid." << endl;
            break;
    }
}