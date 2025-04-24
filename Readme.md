# Program Tumpukan Buku (Book Stack)

Implementasi sederhana struktur data Stack menggunakan contoh simulasi tumpukan buku dalam bahasa C++.

## Deskripsi

Program ini mensimulasikan tumpukan buku menggunakan struktur data Stack, sesuai dengan prinsip LIFO (Last In First Out). Aplikasi ini dibuat sebagai tugas individu untuk mata kuliah Struktur Data dan mendemonstrasikan penerapan Stack dalam kasus nyata.

## Fitur

Program ini memungkinkan pengguna untuk:
- Menambahkan buku ke tumpukan (operasi Push)
- Mengambil buku teratas dari tumpukan (operasi Pop)
- Melihat buku yang ada di bagian atas tumpukan (operasi Peek)
- Menampilkan semua buku dalam tumpukan

## Struktur Data

Program menggunakan struktur data **Stack** dengan implementasi array statis. Komponen utama dari struktur data ini:

- Array penyimpanan untuk nama-nama buku
- Indeks `top` yang menunjukkan posisi elemen teratas
- Operasi dasar: push, pop, peek, dan isEmpty

## Cara Kompilasi dan Menjalankan

```bash
# Kompilasi program
g++ BookStack.cpp -o BookStack

# Menjalankan program
./BookStack
```

## Contoh Penggunaan

Setelah menjalankan program, Anda akan melihat menu seperti berikut:

```
==== PROGRAM TUMPUKAN BUKU ====

Menu:
1. Tambah Buku
2. Ambil Buku Teratas
3. Lihat Buku Teratas
4. Tampilkan Semua Buku
5. Keluar
Pilihan Anda:
```

## Batasan

- Tumpukan buku memiliki kapasitas maksimal 5 buku
- Program hanya menyimpan judul buku (string)

## Tentang Tugas

Repository ini dibuat untuk memenuhi Tugas Individu - Topik 2: Menerapkan Prinsip Kerja Stack atau Queue serta Aplikasinya.

## File yang Disertakan

- `BookStack.cpp` - Source code program dalam C++
- `dokumentasi.pdf` - Dokumen yang berisi deskripsi, penjelasan struktur data, flowchart/pseudocode, dan screenshot program