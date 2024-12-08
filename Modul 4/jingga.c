// #include <stdio.h>

// int main() {
//     int transaksi, total, lanjut;

//     do {
//         total = 0;
//         printf("=== Pencatatan Transaksi ===\n");
//         printf("Masukkan transaksi selanjutnya (gunakan 0 untuk menyelesaikan):\n");

//         // Loop untuk mendapatkan input dari users
//         while (1) {
//             scanf("%d", &transaksi);

//             if (transaksi == 0) {
//                 break; // Stop jika input 0
//             }

//             total += transaksi; // kalkulasi total transaksi
//         }

//         printf("Total dari transaksi tersebut adalah: %d\n", total);

//         // Tanyakan apakah pengguna ingin memasukkan rangkaian transaksi lain
//         printf("Apakah Anda ingin mencatat transaksi lagi? (1=Ya, 0=Tidak): ");
//         scanf("%d", &lanjut);

//     } while (lanjut == 1);

//     printf("Terima kasih!\n");
//     printf("=== Code Execution Successful ===\n");

//     return 0;
// }


#include <stdio.h>

int main() {
    int transaksi, total, lanjut;

    do {
        total = 0;
        printf("=== Pencatatan Transaksi ===\n");
        printf("Masukkan transaksi selanjutnya (gunakan 0 untuk menyelesaikan):\n");

        // Loop pertama untuk mendapatkan input dari pengguna
        for (;;) {
            scanf("%d", &transaksi);

            if (transaksi == 0) {
                break; // Stop jika input 0
            }

            total += transaksi; // Kalkulasi total transaksi
        }

        printf("Total dari transaksi tersebut adalah: %d\n", total);

        // Tanyakan apakah pengguna ingin memasukkan rangkaian transaksi lain
        printf("Apakah Anda ingin mencatat transaksi lagi? (1=Ya, 0=Tidak): ");
        
        // Loop kedua sebagai nested untuk meminta konfirmasi lagi
        for (;;) {
            scanf("%d", &lanjut);
            if (lanjut == 0 || lanjut == 1) {
                break; // keluar jika input valid
            } else {
                printf("Input tidak valid. Silakan coba lagi: ");
            }
        }

    } while (lanjut == 1);

    printf("Terima kasih!\n");
    printf("=== Code Execution Successful ===\n");

    return 0;
}