#include <stdio.h>

int main(){
  char toko_produk[3][10] = {"Produk A", "Produk B", "Produk C"};
  int toko_nilai1[3] = {5, 8, 6};
  int toko_nilai2[3] = {3, 7, 9};
  int total[3];

  printf("Total penjualan untuk setiap produk:\n");
  for(int i = 0; i < 3; i++) {
    total[i] = toko_nilai1[i] + toko_nilai2[i];
    printf("%s: %d %d %d\n", toko_produk[i], toko_nilai1[i], toko_nilai2[i], total[i]);
  }

    return 0;
}

// #include <stdio.h>

// int main() {
//     // Array 2D untuk menyimpan jumlah produk terjual di dua toko
//     int penjualan[2][3] = {
//         {5, 8, 6}, // Toko 1 (Produk A, Produk B, Produk C)
//         {3, 7, 9}  // Toko 2 (Produk A, Produk B, Produk C)
//     };

//     // Array untuk menyimpan total penjualan setiap produk
//     int totalProduk[3] = {0, 0, 0};

//     // Hitung total penjualan untuk setiap produk
//     for (int produk = 0; produk < 3; produk++) {
//         for (int toko = 0; toko < 2; toko++) {
//             totalProduk[produk] += penjualan[toko][produk];
//         }
//     }

//     // Tampilkan hasil
//     printf("Total penjualan untuk setiap produk:\n");
//     printf("Produk A: %d\n", totalProduk[0]);
//     printf("Produk B: %d\n", totalProduk[1]);
//     printf("Produk C: %d\n", totalProduk[2]);

//     printf("\n=== Code Execution Successful ===\n");

//     return 0;
// }
