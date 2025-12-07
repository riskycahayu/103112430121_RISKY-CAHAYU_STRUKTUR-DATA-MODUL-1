#include "Doublylist.h"

int main() {
    List L;
    createList(L);
    infotype x;
    address P;

    int n;
    cout << "Masukkan jumlah kendaraan: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nomor polisi: ";
        cin >> x.nopol;
        if (findElm(L, x.nopol) != NULL) {
            cout << "Nomor polisi sudah terdaftar!" << endl;
            continue;
        }
        cout << "Masukkan warna kendaraan: ";
        cin >> x.warna;
        cout << "Masukkan tahun kendaraan: ";
        cin >> x.thnBuat;
        cout << endl;

        P = alokasi(x);
        insertLast(L, P);
    }

    printInfo(L);

    // Cari data
    string cari;
    cout << "Masukkan nomor polisi yang dicari: ";
    cin >> cari;
    address found = findElm(L, cari);
    if (found != NULL) {
        cout << "Ditemukan!" << endl;
        cout << "No Polisi : " << found->info.nopol << endl;
        cout << "Warna     : " << found->info.warna << endl;
        cout << "Tahun     : " << found->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan!" << endl;
    }

    // Hapus data dengan nomor polisi D003
    cout << "\nMasukkan nomor polisi yang akan dihapus: ";
    cin >> cari;
    address del = findElm(L, cari);
    if (del == NULL) {
        cout << "Data tidak ditemukan!" << endl;
    } else {
        if (del == L.first)
            deleteFirst(L, del);
        else if (del == L.last)
            deleteLast(L, del);
        else {
            address prec = del->prev;
            deleteAfter(prec, del);
        }
        dealokasi(del);
        cout << "Data berhasil dihapus!\n";
    }

    cout << "\nData setelah penghapusan:\n";
    printInfo(L);

    return 0;
}
