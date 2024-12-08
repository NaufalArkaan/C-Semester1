#include <stdio.h>
#include <string.h>

int main(){
    int jumlah_buah;
    int i, j;
    char nama_buah[10][50], s[50];
    
    printf("Masukan jumlah buah (maksimal 10): ");scanf("%d", &jumlah_buah); //inputan jumlah buah

    if(jumlah_buah > 10){
        printf("Jangan lebih dari 10\n");
        main();
    }

    if(jumlah_buah > 0){
    for( i=0; i < jumlah_buah; i++){
        printf("Masukan nama buah ke-%d: ", i+1);scanf("%s", &nama_buah[i]); //inputan nama buah
        continue;
    }
    }
    printf("\nNama buah dalam urutan yang diinputkan: \n"); //nama buah sesuai urutan inputan
    for (i = 0; i < jumlah_buah; i++) {
        printf("%s\n", nama_buah[i]);
    }
    printf("\nNama buah dalam urutan abjad: \n"); //nama buah yang sudah di sorting
    for(i=0;i<jumlah_buah;i++){
      for(j=i+1;j<jumlah_buah;j++){ //jumlah inputan harus 2 baru bisa membandingkan abjad
         if(strcmp(nama_buah[i],nama_buah[j])>0){
            strcpy(s,nama_buah[i]);
            strcpy(nama_buah[i],nama_buah[j]);
            strcpy(nama_buah[j],s);
         }
      }
   }
    for(i=0;i<jumlah_buah;i++){
      printf("%s\n",nama_buah[i]);  //print nama buah yang telah di sorting
   }

    return 0;
}

// #include <stdio.h>

// int main(){
//     int jumlah_buah;
//     char nama_buah[10];

//     printf("Masukan Jumlah Buah (maksimal 10): ");scanf("%d", &jumlah_buah);

//     if(jumlah_buah > 0){
//     for(int i=0; i < jumlah_buah; i++){
//         printf("Masukan nama buah ke-%d\n", i+1);scanf("%s", &nama_buah[i]);
//         continue;
//     }
//     }

//     printf("\nNama buah dalam urutan yang diinputkan:\n");
//     for(int k=0; k < jumlah_buah; k++){
//     printf("%s", nama_buah[k]);
//   }

//     return 0;
// }

