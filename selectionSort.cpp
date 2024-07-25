#include <iostream>
#include <string>

using namespace std;

// Struktur data untuk menyimpan nama dan alamat
struct Data {
    string nama;
    string alamat;
};

// Membuat Fungsi untuk mengurutkan data menggunakan Selection Sort
void selectionSort(Data data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            // Jika data[j] lebih kecil dari data[min_idx], maka update min_idx
            if (data[j].nama < data[min_idx].nama) {
                min_idx = j;
            }
        }
        // Tukar data[i] dengan data[min_idx]
        swap(data[i], data[min_idx]);
    }
}

int main() {
    // Data awal
    Data data[] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };

    int n = sizeof(data) / sizeof(data[0]);

    // Mengurutkan data menggunakan Selection Sort
    selectionSort(data, n);

    cout << "Hasil akhir setelah diurutkan menggunakan Selection Sort:" << endl;
    for (int i = 0; i < n; i++) {
        cout << data[i].nama << " " << data[i].alamat << endl;
    }
    return 0;
}