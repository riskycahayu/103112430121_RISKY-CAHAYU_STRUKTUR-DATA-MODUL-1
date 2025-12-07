// Risky Cahayu 
// 103112430121

#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Masukkan jumlah elemen : ";
    cin >> N;

    int *ptr = new int[N]; 

    cout << "\nMasukkan " << N << " bilangan bulat:\n";
    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> *(ptr + i);  
    }

    int jumlah = 0;
    int maks = *ptr; 
    int min = *ptr;

    for (int i = 0; i < N; i++) {
        jumlah += *(ptr + i);
        if (*(ptr + i) > maks)
            maks = *(ptr + i);
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }

    cout << "\nHASIL PERHITUNGAN BILANGAN\n";
    cout << "----------------------\n";
    cout << "Jumlah  = " << jumlah << endl;
    cout << "Maksimum = " << maks << endl;
    cout << "Minimum  = " << min << endl;

    delete[] ptr; 
    return 0;
}
