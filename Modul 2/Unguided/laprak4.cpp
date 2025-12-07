// Risky Cahayu 
// 103112430121

#include <iostream>
using namespace std;


void tampilPolaSegitiga(int n) {
    for (int i = 1; i <= n; i++) {       
        for (int j = 1; j <= i; j++) {    
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan bilangan bulat n: ";
    cin >> n;

    cout << "\nPola segitiga angka:\n";
    tampilPolaSegitiga(n);   

    return 0;
}
