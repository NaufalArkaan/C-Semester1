// #include <stdio.h>
// #include <string.h>

// int main() {
//     char string1[50];
//     char unik[50];
//     int i, j, hasil;

//     printf("Masukan sebuah string: ");
//     scanf("%[^\n]s", string1);

//     for (i = 0; i < strlen(string1); i++){
//         unik
//     }   


//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int unique;

    printf("Masukkan sebuah string: ");
    scanf("%[^\n]s", str);

    printf("Karakter unik: ");
    for (i = 0; str[i] != '\0'; i++) { //str[i] != '\0'; memastikan bahwa loop hanya berjalan selama ada karakter dalam string dan akan berhenti ketika mencapai akhir string yang ditandai oleh '\0'
        unique = 1; //mengatur ulang status karakter sebagai unik di awal setiap iterasi 
        
        // Memeriksa apakah karakter sudah muncul sebelumnya
        for (j = 0; j < i; j++) { //Variabel j digunakan sebagai indeks untuk loop ini. Pada setiap iterasi, j bertambah satu, sehingga loop ini memeriksa setiap karakter yang sudah dilewati hingga posisi i-1.
            if (str[i] == str[j]) { //mencocokan karakter unique apakah sama atau beda 
                unique = 0; //ketika karakter sama keluar maka unique 0 akan keluar dan karakter tersebut artinya tidak unik
                break; // Menghentikan pencarian saat karakter sudah ditemukan
            }
        }

        if (!unique) continue; // Melompat ke iterasi berikutnya jika karakter sudah pernah muncul

        printf("%c", str[i]);
    }
    
    printf("\n=== Code Execution Successful ===\n");
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     int i, j;

//     printf("Masukkan sebuah string: ");
//     scanf("%[^\n]s", str);

//     printf("Karakter unik: ");
//     for (i = 0; str[i] != '\0'; i++) {
//         for (j = 0; j < i; j++)
//             if (str[i] == str[j]) break;
//         if (i == j) printf("%c", str[i]);
//     }
    
//     printf("\n=== Code Execution Successful ===\n");
//     return 0;
// }
