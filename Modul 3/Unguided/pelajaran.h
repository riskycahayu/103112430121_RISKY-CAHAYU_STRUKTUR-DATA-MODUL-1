#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <iostream>
#include <string>
using namespace std;

// Tipe data pelajaran
struct pelajaran {
    string namaMatkul;
    string kodeMatkul;
};

// Fungsi dan prosedur yang akan diimplementasikan di pelajaran.cpp
pelajaran create_pelajaran(string namatkul, string kodematkul);
void tampil_pelajaran(pelajaran pel);

#endif
