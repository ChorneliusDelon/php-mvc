#include <iostream>

using namespace std;

int main() {
    // Menampilkan pesan awal
    cout << "Bilangan bulat kelipatan dua antara 10 dan 50:\n";

    // Menggunakan perulangan 'for' untuk iterasi dari 10 hingga 50
    for (int i = 10; i <= 50; i += 2) {
        // Cetak bilangan 'i' yang merupakan kelipatan dua
        cout << i << " ";
    }

    // Cetak baris baru untuk memberikan pemisah
    cout << "\n";
}
