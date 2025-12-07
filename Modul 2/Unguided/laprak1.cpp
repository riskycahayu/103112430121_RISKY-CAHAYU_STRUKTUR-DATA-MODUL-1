// Nama : Risky Cahayu
// NIM  : 103112430121

#include <iostream>
using namespace std;

int main() {
    string nama[5];
    float nilai[5][3];
    float rata[5];
    int terbaik = 0;

    cout << "=====================================\n";
    cout << "        LAPORAN NILAI MAHASISWA      \n";
    cout << "=====================================\n";

    // Input data mahasiswa
    for (int i = 0; i < 5; i++) {
        cout << "\nMasukkan nama mahasiswa ke-" << i + 1 << ": ";
        cin >> nama[i];

        float total = 0;

        for (int j = 0; j < 3; j++) {
            cout << "  Nilai mata kuliah ke-" << j + 1 << ": ";
            cin >> nilai[i][j];
            total += nilai[i][j];
        }

        rata[i] = total / 3.0;

        if (rata[i] > rata[terbaik]) {
            terbaik = i;
        }
    }

    // Tampilkan hasil data mahasiswa
    cout << "\n\n==========================================================================================\n";
    cout << "                                   DAFTAR NILAI MAHASISWA                    \n";
    cout << "============================================================================================\n";
    cout << "Nama\t\tMata Kuliah 1\tMata Kuliah 2\tMata Kuliah 3\tRata-rata\tKeterangan\n";
    cout << "--------------------------------------------------------------------------------------------\n";

    for (int i = 0; i < 5; i++) {
        cout << nama[i] << "\t\t";

        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << "\t\t";
        }

        cout << rata[i] << "\t\t";

        if (i == terbaik)
            cout << "Terbaik";

        cout << endl;
    }

    cout << "--------------------------------------------------------------------------------------------\n";
    cout << "Mahasiswa terbaik: " << nama[terbaik]
         << " dengan rata-rata " << rata[terbaik] << endl;

    return 0;
}
