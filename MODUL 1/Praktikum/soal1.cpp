// Risky Cahayu 
// 103112430121

#include <iostream>
using namespace std;

int main() {
    float angka1, angka2;
    cout << "masukkan bilangan pertama : ";
    cin >> angka1;
    cout << "masukkan bilangan kedua : ";
    cin >> angka2;

    cout << "\nHasil Operasi:\n";
    cout << "penjumlahan : " << angka1 + angka2 << endl;
    cout << "pengurangan : " << angka1 - angka2 << endl;
    cout << "perkalian : " << angka1 * angka2 << endl;

    if (angka2 !=0) {
        cout << "Pembagian : " << angka1 / angka2 << endl;
    } else {
        cout << "Pembagian : Tidak dapat dibagi dengan nol!" << endl;
    }
    return 0;
 }
