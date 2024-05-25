#include <iostream>

int main() {
    int angka_pertama, angka_kedua;

    // Meminta pengguna untuk memasukkan dua angka
    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka_pertama;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka_kedua;

    // Melakukan operasi aritmatika
    int hasil_penjumlahan = angka_pertama + angka_kedua;
    int hasil_pengurangan = angka_pertama - angka_kedua;
    int hasil_perkalian = angka_pertama * angka_kedua;
    int hasil_pembagian = angka_pertama / angka_kedua;

    // Menampilkan hasil
    std::cout << "Penjumlahan: " << hasil_penjumlahan << std::endl;
    std::cout << "Pengurangan: " << hasil_pengurangan << std::endl;
    std::cout << "Perkalian: " << hasil_perkalian << std::endl;
    std::cout << "Pembagian: " << hasil_pembagian << std::endl;

    return 0;
}
