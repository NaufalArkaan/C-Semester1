// #include <stdio.h>

// int main() {
//     int umur;

//     printf("Masukkan umur penumpang: ");
//     scanf("%d", &umur);

//     if (umur >= 0 && umur <= 120) {
//         if (umur < 2) {
//             printf("Penumpang mendapatkan tiket gratis.\n");
//         } else if (umur <= 12) {
//             printf("Harga tiket untuk penumpang anak-anak adalah 50%% dari harga normal.\n");
//         } else if (umur <= 60) {
//             printf("Harga tiket untuk penumpang dewasa adalah harga normal.\n");
//         } else {
//             printf("Harga tiket untuk penumpang lanjut usia adalah 75%% dari harga normal.\n");
//         }
//     } else {
//         printf("Input tidak valid. Umur harus berada dalam rentang 0 hingga 120.\n");
//     }

//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int umur;

//     printf("Masukan umur anda : ");
//     scanf("%d", &umur);

//     if(umur >= 0 && umur <= 120){
//         switch(umur){
//             case 0 ... 1:
//             printf("Penumpang mendapatkan tiket gratis.\n");
//             break;
//             case 2 ... 12:
//             printf("Harga tiket untuk penumpang anak-anak adalah 50%% dari harga normal.\n");
//             break;
//             case 13 ... 60:
//             printf("Harga tiket untuk penumpang dewasa adalah harga normal.\n");
//             break;
//             default:
//             printf("Harga tiket untuk penumpang lanjut usia adalah 75%% dari harga normal.\n");
//             break;
//         }
//     }else{
//         printf("Input tidak valid. Umur harus berada dalam rentang 0 hingga 120.\n");
//     }

//     return 0;
// }