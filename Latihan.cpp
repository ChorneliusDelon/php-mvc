#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar elemen jika elemen saat ini lebih besar dari elemen berikutnya
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    std::cout << "Masukkan jumlah elemen: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Masukkan elemen-elemen: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Panggil fungsi Bubble Sort
    bubbleSort(arr, n);

    std::cout << "Hasil setelah diurutkan (ascending): ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}