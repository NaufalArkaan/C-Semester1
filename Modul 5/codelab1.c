// #include <stdio.h>
// #include <string.h>

// int main() {
//     // Inisialisasi array 2D dengan nama siswa dan nilai ujian
//     char *siswa[] = {"Alice", "Bob", "Charlie", "David", "Eva"};
//     int nilai[] = {85, 90, 78, 92, 88};
//     int jumlah_siswa = 5;

//     // Tampilkan daftar siswa dan nilai sebelum diubah
//     printf("Daftar siswa dan nilai sebelum diubah:\n");
//     for (int i = 0; i < jumlah_siswa; i++) {
//         printf("%s: %d\n", siswa[i], nilai[i]);
//     }

//     // Ubah nilai David menjadi 95
//     for (int i = 0; i < jumlah_siswa; i++) {
//         if (strcmp(siswa[i], "David") == 0) {
//             nilai[i] = 95;
//             break;
//         }
//     }

//     // Tampilkan daftar siswa dan nilai setelah diubah
//     printf("\nDaftar siswa dan nilai setelah diubah:\n");
//     for (int i = 0; i < jumlah_siswa; i++) {
//         printf("%s: %d\n", siswa[i], nilai[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
  char nama[5][10] = {"David", "Bob", "Charlie", "David", "Eva"};
  int nilai[5] = {85, 90, 78, 92, 88};

  printf("Daftar siswa dan nilai sebelum diubah:\n");
  for (int i = 0; i < 5; i++) {
    printf("%s: %d\n", nama[i], nilai[i]);
    // continue;
  }
  for (int i = 0; i < 5; i++){  
    if(strcmp(nama[i], "David") == 0) { // mencari elemen dalam array nama yang nilainya sama dengan string "David".
    nilai[i] = 95;
    // break;
    }
}
  printf("\nDaftar siswa dan nilai setelah diubah:\n");
  for (int i = 0; i < 5; i++) {
    printf("%s: %d\n", nama[i], nilai[i]);
  }

  return 0;
}

// #include <stdio.h>

// struct dataNilai
// {
//     char nama[100];
//     int nilai;
// };


// int main(int argc, char const *argv[])
// {
//     int i;
//     struct dataNilai siswa[5] = {
//        {"Alice", 85},
//        {"Bob", 90},
//        {"Charlie", 78},
//        {"David", 92},
//        {"Eva", 88},
//     };

//     printf("Daftar siswa dan nillai sebelum diubah : \n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%s : %d\n", siswa[i].nama, siswa[i].nilai);
//         continue;
//     }
//     printf("\n");
//     siswa[3].nilai = 95;
//     printf("Daftar siswa dan nillai setelah diubah : \n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%s : %d\n", siswa[i].nama, siswa[i].nilai);
//         continue;
//     }
    

//     return 0;
// }

    
