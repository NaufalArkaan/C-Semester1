//if
// #include <stdio.h>

// int main() {
//     int num = 10;

//     if (num > 0){
//     printf("Angka adalah bilangan positif.\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int gfg = 9;

//     if(gfg < 10){
//         printf("%d lebih kecil dari 10", gfg);
//     }

//     if(gfg > 20) {
//         printf("%d lebih besar dari 20", gfg);
//     }


//     return 0;
// }


//if - else
// #include <stdio.h>

// int main() {
//     int num = -5;

//     if(num > 0){
//         printf("Angka adalah bilangan positif.");
//     }else{
//         printf("Angka adalah bilangan negatif.");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i = 20;

//     if(i < 15){
//         printf("i lebih kecil dari 15");
//     }else {
//         printf("i lebih besar dari 15");
//     }

//     return 0;
// }


//if-else if
// #include <stdio.h>

// int main() {
//     int age;

//     printf("Masukan usia anda:");
//     scanf("%d", &age);

//     if(age < 0){
//         printf("Usia tidak boleh negatif.");
//     } else if(age < 18){
//         printf("Anda masih dibawah umur");
//     } else if(age < 60){
//         printf("Anda adalah orang dewasa.");
//     } else {
//         printf("Anda sudah lansia.");
//     }

//     return 0;
// }

// int main() {
//     int umur;

//     printf("Masukan umur anda :");
//     scanf("%d", &umur);

//     if(umur < 13){
//         printf("Anda adalah seorang anak - anak.\n");
//     }else if(umur >= 13 && umur < 20){
//         printf("Anda adalah seorang remaja.\n");
//     }else if(umur >= 20 && umur < 65){
//         printf("Anda adalah seorang dewasa");
//     } else {
//         printf("Anda adalah seorang lansia");
//     }

//     return 0;
// }

// int main() {
//     int skor;
//     char nilai_huruf;

//     printf("Masukan skor anda (0-100): ");
//     scanf("%d", &skor);

//     if (skor >= 90){
//         nilai_huruf = 'A';
//     }else if(skor >= 80){
//         nilai_huruf = 'B';
//     }else if(skor >= 70){
//         nilai_huruf = 'C';
//     }else if(skor >= 60){
//         nilai_huruf = 'D';
//     }else {
//         nilai_huruf = 'F';
//     }


//     printf("Nilai huruf Anda adalah: %c", nilai_huruf);

//     return 0;
// }


//Nested IF
// int main() {
//     int num = 10;

//     if(num > 0){
//         printf("Angka adalah bilangan positif.\n");
//         if(num % 2 == 0){
//             printf("Angka adalah bilangan genap.\n");
//         } else {
//             printf("Angka adalah bilangan ganjil. \n");
//         }
//     }else {
//         printf("Angka adalah bilangan negatif atau nol.\n");
//     }

//     return 0;
// }

// int main() {
//     int umur;
//     char jenis_kelamin;

//     // Meminta pengguna untuk memasukan jenis kelamin
//     printf("Masukan jenis kelamin anda (L/P): ");
//     scanf(" %c", &jenis_kelamin);

//     //Meminta pengguna untuk memasukkan umur
//     printf("Masukan umur Anda: ");
//     scanf("%d", &umur);

//     //Menentukan kategori usia berdasarkan jenis kelamin dan umur
//     if(jenis_kelamin == 'L' || jenis_kelamin == 'L'){
//         if(umur < 13){
//             printf("Anda adalah anak laki - laki. \n");
//         } else if(umur >= 13 && umur < 20){
//             printf("Anda adalah remaja laki laki.");
//         } else if(umur >= 20 && umur < 65){
//             printf("Anda adalah pria dewasa. \n");
//         } else {
//             printf("Anda adalah pria lansia.\n");
//         }
//     } else if (jenis_kelamin == 'P' || jenis_kelamin == 'P'){
//         if(umur < 13){
//             printf("Anda adalah anak perempuan. \n");
//         } else if(umur >= 13 && umur < 20){
//             printf("Anda adalah remaja perempuan. \n");
//         } else if(umur >= 20 && umur < 65){
//             printf("Anda adalah wanita dewasa. \n");
//         } else {
//             printf("Anda adalah wanita lansia. \n");
//         }
//     } else {
//         printf("Jenis kelamin tidak valid.");
//     }

//     return 0;
// }



// void dataKembali(){
//     printf("\n 1. hitung, 2. keluar : \n");
//     scanf("%d", &pilihan);
// }


//Challenge
// #include <stdio.h>

// int main(){
//     int a;
//     int pilihan;
//     printf("\nKlik 1 untuk Hitung, Klik 2 untuk keluar\n");
//     printf("1. Hitung\n");
//     printf("2. Keluar\n");
//     scanf("%d", &pilihan);

//     switch(pilihan){
//     case 1:
//     printf("Masukan angka : ");
//     scanf("%d", &a);
//         if(a > 0){
//             printf("%d Adalah bilangan positif\n", a);
//             main();
//         }else if(a < 0){
//             printf("%d Adalah bilangan negatif\n", a);
//             main();
//         }else{
//             printf("%d adalah bilangan nol\n", a);
//             main();
//         }
//         break;
//     case 2:
//         return 0;
//     }

// }

// #include <stdio.h>

// int main(){
//     int umur;
//     char jenis_kelamin;

//     printf("Masukan jenis kelamin Anda (L/P): ");
//     scanf(" %c", &jenis_kelamin);

//     printf("Masukan umur Anda:");
//     scanf("%d", &umur);

//     if(jenis_kelamin == 'L'){
//         if(umur < 13){
//             printf("Anak laki-laki\n");
//         }else if(umur <= 19){
//             printf("Remaja laki-laki\n");
//         }else if(umur < 65){
//             printf("Pria dewasa\n");
//         }else{
//             printf("Pria lansia\n");
//         }
//     }else if(jenis_kelamin == 'P'){
//         if(umur < 13){
//             printf("Anak perempuan\n");
//         }else if(umur >= 13 || umur <= 19){
//             printf("Remaja perempuan\n");
//         }else if(umur < 65){
//             printf("Wanita dewasa\n");
//         }else{
//             printf("Wanita lansia\n");
//         }
//     }else{
//         printf("Jenis kelamin tidak valid\n");
//     }

//     return 0;
// }


//switch
// int main(){
//     int choice;

//     printf("Pilih salah satu dari berikut: \n");
//     printf("1. Profil Jaemin\n");
//     printf("2. Nickname Jaemin\n");
//     printf("3. Quote Jaemin\n");
//     printf("\n Pilihan Anda: ");
//     scanf("%d", &choice);

//     switch (choice){
//         case 1:
//             printf("Nama: Na Jae-min\n, Tanggal lahir: 13 Agustus 2000");
//             break;
//         case 2:
//             printf("Nana <3");
//             break;
//         case 3:
//             printf("If what you want to do doesn't work, continue until you can.");
//             break;
//         default:
//             printf("Pilihan tidak valid.");
//     }
//     return 0;
// }


//Mengukur ukuran memori dengan size of
// #include <stdio.h>

// int main(){
//     printf("Ukuran char: %lu byte\n", sizeof(char));
//     printf("Ukuran int: %lu byte\n", sizeof(int));
//     printf("Ukuran float: %lu byte\n", sizeof(float));
//     printf("Ukuran double: %lu byte\n", sizeof(double));
//     printf("Ukuran pointer: %lu byte\n", sizeof(int*));

//     return 0;
// }

// int main(){
//     char nama [] = "omen";
//     int umur = 25;

//     printf("Alamat memori nama: %p\n", &nama);
//     printf("Alamat memori umur: %p\n", &umur);

//     return 0;
// }

// int main() {
//     int num = 10;
//     int *ptr; //deklarasi pointer

//     ptr = &num; //Inisialisasi pointer dengan alamat memori dari variabel num

//     printf("Nilai dari variabel num: %d\n", num);
//     printf("Alamat memori dari variabel num: %p\n", &num);
//     printf("Nilai yang ditunjuk oleh pointer: %d\n", *ptr);
//     printf("Alamat memory yang ditunjuk oleh pointer: %p\n", ptr);


//     return 0;
// }

// #include <stdlib.h>

// int main() {
//     int n, i;
//     int *arr;

//     printf("Masukan jumlah elemen: ");
//     scanf("%d", &n);

//     arr = (int*)calloc(n, sizeof(int));

//     if (arr == NULL) {
//         printf("Alokasi memori gagal !\n");
//         return 1;
//     }

//     for (i =0; i<n; i++){
//         printf("arr[%d] = %d, Alamat memori = %p\n", i, arr[i], (void*)&arr[i]);
//     }

//     free(arr);

//     return 0;
// }


//Cara mengakses enums
// enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
// int main(){
//     enum Day today = Wednesday;

//     if(today == Wednesday){
//         printf("Today is Wednesday\n");
//     }else{
//         printf("Today is not Wednesday");
//     }

//     return 0;
// }

// enum Bulan {
//     JANUARI = 1, FEBRUARI, MARET, APRIL, MEI, JUNI, JULI, AGUSTUS, SEPTEMBER, OKTOBER, NOVEMBER, DESEMBER
//     };

// int main (){
//     enum Bulan bulanIni;
//     bulanIni = OKTOBER;

//     printf("Bulan ini adalah bulan ke-%d dalam setahun. \n", bulanIni);


//     return 0;
// }

// enum Member {
//     ROSE = 1,
//     JENNIE,
//     JISOO,
//     LALISA
// };
// int main(){
//     enum Member who;
//     who = JENNIE;

//     printf("She is a ");
//     switch(who) {
//         case 1:
//             printf("Singer");
//             break;
//         case 2:
//             printf("Rapper");
//             break;
//         case 3:
//             printf("Actress");
//             break;
//         case 4:
//             printf("Dancer");
//             break;
//         default:
//             printf("Unknown");

//     }
//     printf(".\n");

//     return 0;
// }

