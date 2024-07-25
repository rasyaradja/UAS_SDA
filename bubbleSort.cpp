#include <iostream>
#include <string>

using namespace std;

// Struktur data untuk menyimpan nama dan alamat
struct Data {
    string nama;
    string alamat;
};

// Membuat Fungsi untuk mengurutkan data menggunakan Bubble Sort
void bubbleSort(Data data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Jika data[j] lebih besar dari data[j + 1], maka tukar
            if (data[j].nama > data[j + 1].nama) {
                swap(data[j], data[j + 1]);
            }
        }
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

    // Mengurutkan data menggunakan Bubble Sort
    bubbleSort(data, n);

    cout << "Hasil akhir setelah diurutkan menggunakan Bubble Sort:" << endl;
    for (int i = 0; i < n; i++) {
        cout << data[i].nama << " " << data[i].alamat << endl;
    }

    return 0;
}