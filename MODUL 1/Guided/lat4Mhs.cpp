// Risky Cahayu 
// 103112430121

#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string NIM;
};

int main() {
    Mahasiswa mhs;

    cout << "Nama : ";
    getline(cin, mhs.nama);
    cout << "NIM : ";
    cin >> mhs.NIM;

    cout << endl;

    cout << "Nama : " << mhs.nama << endl
        << "NIM : " << mhs.NIM << endl;
}