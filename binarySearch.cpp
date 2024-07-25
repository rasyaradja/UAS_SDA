#include <iostream>
#include <vector>

// Fungsi untuk mencetak array
void printArray(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Fungsi untuk mencari elemen dalam array menggunakan Linear Search
// Fungsi ini mengembalikan semua indeks yang ditemukan
std::vector<int> linearSearchAll(const std::vector<int>& arr, int x) {
    std::vector<int> result;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == x) {
            result.push_back(i + 1); // +1 untuk indeks 1-based
        }
    }
    
    return result;
}

int main() {
    // Array yang diberikan
    std::vector<int> arr = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    
    // Cetak array yang tidak diurutkan
    std::cout << "Array: ";
    printArray(arr);

    // Pengujian test case
    std::vector<int> testCases = {1, 50, 100};

    for (int x : testCases) {
        std::vector<int> result = linearSearchAll(arr, x);
        if (result.empty()) {
            std::cout << "Angka " << x << " tidak ada dalam array" << std::endl;
        } else {
            std::cout << "Angka " << x << " ada di indeks ke ";
            for (int index : result) {
                std::cout << index << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
