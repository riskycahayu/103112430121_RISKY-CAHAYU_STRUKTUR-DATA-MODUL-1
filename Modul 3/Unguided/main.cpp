#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    string namatkul = "Struktur Data";
    string kodematkul = "STD";

    // Membuat objek pelajaran
    pelajaran pel = create_pelajaran(namatkul, kodematkul);

    // Menampilkan hasil
    tampil_pelajaran(pel);

    return 0;
}
