// Risky Cahayu 
// 103112430121

#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string NIM; 
};

int main() {
    Mahasiswa mhs;
    mhs.nama = "Cahayu";
    mhs.NIM = "103112430121";

    cout << "Nama : " << mhs.nama << endl
         << "NIM  : " << mhs.NIM << endl;

    return 0;
}
