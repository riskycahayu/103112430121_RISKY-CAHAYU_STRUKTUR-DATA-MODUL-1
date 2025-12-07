#include <iostream>
#include "pelajaran.h"

// Membuat data pelajaran
pelajaran create_pelajaran(string namatkul, string kodematkul) {
    pelajaran p;
    p.namaMatkul = namatkul;
    p.kodeMatkul = kodematkul;
    return p;
}

// Menampilkan data pelajaran
void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : " << pel.namaMatkul << endl;
    cout << "nilai : " << pel.kodeMatkul << endl;
}
