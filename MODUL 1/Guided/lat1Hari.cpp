// Risky Cahayu 
// 103112430121

#include <iostream>
using namespace std;

int main() {
    int hari;
    cout << "Hari 1-7 : ";
    cin >> hari;

    // Versi if else
    if (hari == 7) {
        cout << "Hari Minggu\n";
    } else {
        cout << "Hari Kerja\n";
    }

    // Versi switch case
    switch (hari) {
        case 7:
            cout << "Hari Minggu\n";
            break;
        default:
            cout << "Hari Kerja\n";
            break;
    }

    return 0;
}