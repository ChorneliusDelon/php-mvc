#include <iostream>
using namespace std;

// Fungsi untuk memeriksa apakah suatu bilangan adalah bilangan prima
bool isPrime(int number) {
    if (number <= 1) {
        return false; // Bilangan negatif dan 1 bukan bilangan prima
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false; // Jika ada pembagian yang habis, bukan bilangan prima
        }
    }
    return true; // Jika tidak ada pembagian yang habis, maka bilangan prima
}

int main() {
    cout << "Bilangan Prima dari 1 hingga 100:\n";
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " "; // Cetak bilangan prima yang ditemukan
        }
    }
    cout << "\n";

}