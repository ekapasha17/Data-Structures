#include <iostream>
#include <string>
using namespace std;

// Ukuran maksimal stack
const int MAX_SIZE = 5;

class BookStack {
private:
    string books[MAX_SIZE];  // Array untuk menyimpan nama buku
    int top;                 // Indeks elemen teratas

public:
    // Konstruktor
    BookStack() {
        top = -1;  // Stack kosong saat dibuat
    }

    // Fungsi untuk menambah buku ke tumpukan (push)
    void tambahBuku(string namaBuku) {
        if (top >= MAX_SIZE - 1) {
            cout << "Tumpukan penuh! Tidak bisa menambah buku lagi." << endl;
        } else {
            top++;
            books[top] = namaBuku;
            cout << "Buku '" << namaBuku << "' ditambahkan ke tumpukan." << endl;
        }
    }

    // Fungsi untuk mengambil buku teratas (pop)
    void ambilBuku() {
        if (top < 0) {
            cout << "Tumpukan kosong! Tidak ada buku yang bisa diambil." << endl;
        } else {
            cout << "Buku '" << books[top] << "' diambil dari tumpukan." << endl;
            top--;
        }
    }

    // Fungsi untuk melihat buku teratas (peek)
    void lihatBukuAtas() {
        if (top < 0) {
            cout << "Tumpukan kosong! Tidak ada buku yang bisa dilihat." << endl;
        } else {
            cout << "Buku teratas adalah: '" << books[top] << "'" << endl;
        }
    }

    // Fungsi untuk menampilkan semua buku dalam tumpukan
    void tampilkanSemuaBuku() {
        if (top < 0) {
            cout << "Tumpukan kosong!" << endl;
        } else {
            cout << "Isi tumpukan buku (dari atas ke bawah):" << endl;
            for (int i = top; i >= 0; i--) {
                cout << i+1 << ". " << books[i] << endl;
            }
        }
    }

    // Fungsi untuk memeriksa apakah tumpukan kosong
    bool kosong() {
        return (top < 0);
    }
};

int main() {
    BookStack tumpukanBuku;
    int pilihan;
    string namaBuku;

    cout << "==== PROGRAM TUMPUKAN BUKU ====" << endl;
    
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Tambah Buku" << endl;
        cout << "2. Ambil Buku Teratas" << endl;
        cout << "3. Lihat Buku Teratas" << endl;
        cout << "4. Tampilkan Semua Buku" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama buku: ";
                cin.ignore();  // Membersihkan buffer
                getline(cin, namaBuku);
                tumpukanBuku.tambahBuku(namaBuku);
                break;
                
            case 2:
                tumpukanBuku.ambilBuku();
                break;
                
            case 3:
                tumpukanBuku.lihatBukuAtas();
                break;
                
            case 4:
                tumpukanBuku.tampilkanSemuaBuku();
                break;
                
            case 5:
                cout << "Terima kasih telah menggunakan program ini!" << endl;
                break;
                
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 5);

    return 0;
}