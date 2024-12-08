// NAMA : NAUFAL ARKAAN
// NIM : 202410370110020
// KELAS : 1B
// PROGRAM STUDI : INFORMATIKA
// FAKULTAS : TEKNIK


//codelab 1
// #include <stdio.h>
// int main() 
// {
//     int a, b;
//     printf("Masukan dua angka: ");
//     scanf("%d %d", &a, &b); //disini letak kesalahan ga ada simbol ampersand (&)

//     int sum = a + b; //disini letak kesalahan tidak ada semicolon (;)
//     printf("Penjumlahan: %d\n", sum);

//     int difference = a - b;
//     printf("Pengurangan: %d\n", difference);

//     int product = a * b;
//     printf("Perkalian: %d\n", product);

//     if (b !=0) {
//         float division = (float) a / b; //isi fungsi float
//         printf("Pembagian: %.2f\n", division);
//     } else {
//         printf("Eror: Pembagian dengan nol\n");
//     }

//     return 0;
// }

//codelab 2
// #include <stdio.h>
// int main() 
// {
//     char nama[50];
//     int umur;
//     float gaji_pokok;
//     printf("Masukan nama: ");
//     gets(nama);

//     printf("Masukan umur: ");
//     scanf("%d", &umur); //ga ada ampersand

//     printf("Masukan gaji pokok: ");
//     scanf("%f", &gaji_pokok); //ga ada ampersand

//     float tunjangan = gaji_pokok * 0.1;
//     float total_gaji = gaji_pokok + tunjangan;

//     printf("\n");

//     printf("Nama: %s\n", nama); //ga ada semicolon
//     printf("Umur: %d\n", umur);
//     printf("Gaji pokok: %.2f\n", gaji_pokok);
//     printf("Tunjangan: %.2f\n", tunjangan);
//     printf("Total gaji: %.2f\n", total_gaji);
// }