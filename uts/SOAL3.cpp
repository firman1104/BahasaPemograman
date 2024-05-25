#include <iostream>

using namespace std;

int main() {
    int n, i, j;
    
    cout << "Masukkan jumlah baris: ";
    cin >> n;
    
    for(i = 1; i <= n; i++) {
        // Membuat spasi di awal setiap baris
        for (j = 1; j <= n - i; j++)
            cout << " ";
        
        // Mencetak bintang sesuai dengan nomor baris
        for(j = 1; j <= i; j++)
            cout << "*";
        
        // Pindah ke baris baru setelah mencetak satu baris bintang
        cout << endl;
    }
    
    return 0;
}





