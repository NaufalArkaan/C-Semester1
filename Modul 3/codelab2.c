// #include <stdio.h>

// int main(){
//     int pilih;

//     printf("\nPilih Fitur : \n");
//     printf("1. Cari harga tiket\n2. Keluar\n");
//     printf("Masukan pilihan (1-2) : ");
//     scanf("%d", &pilih);

//     switch(pilih){
//         case 1 :
//         printf("\nPilih Kelas Tiket : \n");
//         printf("1. Economy\n2. Business\n3. First Class\n");
//         printf("Masukan pilihan (1-3) : ");
//         scanf("%d", &pilih);
//         if(pilih == 1){
//             printf("Harga tiket kelas bisnis : $300\n");
//             printf("\n=== Code Execution Successful ===");
//             main();
//         }else if(pilih == 2){
//             printf("Harga tiket kelas bisnis : $500\n");
//             printf("\n=== Code Execution Successful ===");
//             main();
//         }else if(pilih == 3){
//             printf("Harga tiket kelas bisnis : $700\n");
//             printf("\n=== Code Execution Successful ===");
//             main();
//         }else{
//             printf("Nilai inputan tidak valid, silahkan masukan angka (1-3) .");
//         }
//         break;
//         case 2 :
//         return 0;
//         default:
//         printf("Nilai inputan tidak valid, silahkan masukan angka (1 atau 2).");
//     }

//     return 0;
// }


// #include <stdio.h>

// enum Ticket{
//     Economy = 1,
//     Business,
//     FirstClass 
// };
// int main(){
//     enum Ticket kelas;

//     printf("\nPilih Kelas Tiket : \n");
//     printf("1. Economy\n2. Business\n3. First Class\n");
//     printf("Masukan pilihan (1-3) : ");
//     scanf("%d", &kelas);

//     switch(kelas){
//         case 1 ... 3:
//         if(kelas == Economy){
//             printf("Harga tiket kelas ekonomi : $300\n");
//         }else if(kelas == Business){
//             printf("Harga tiket kelas bisnis : $500\n");
//         }else if(kelas == FirstClass){
//             printf("Harga tiket kelas bisnis : $700\n");
//         }
//         break;
//         default:
//             printf("Nilai inputan tidak valid, silahkan pilih salah satu angka (1 - 3).");
//     }

//     printf("\n=== Code Execution Succesful ===\n");

//     return 0;
// }


// #include <stdio.h>

// enum Ticket{
//     Economy = 1,
//     Business,
//     FirstClass 
// };
// int main(){
//     enum Ticket kelas;

//     printf("\nPilih Fitur : \n");
//     printf("1. Cari harga tiket\n2. Keluar\n");
//     printf("Masukan pilihan (1-2) : ");
//     scanf("%d", &kelas);

//     switch(kelas){
//         case 1:
//         printf("\nPilih Kelas Tiket : \n");
//         printf("1. Economy\n2. Business\n3. First Class\n");
//         printf("Masukan pilihan (1-3) : ");
//         scanf("%d", &kelas);
//         if(kelas == Economy){
//             printf("Harga tiket kelas ekonomi : $300\n");
//             printf("\n=== Code Execution Succesful ===\n");
//             main();
//         }else if(kelas == Business){
//             printf("Harga tiket kelas bisnis : $500\n");
//             printf("\n=== Code Execution Succesful ===\n");
//             main();
//         }else if(kelas == FirstClass){
//             printf("Harga tiket kelas first class : $700\n");
//             printf("\n=== Code Execution Succesful ===\n");
//             main();
//         }else{
//              printf("\nNilai inputan tidak valid, silahkan pilih salah satu angka (1 - 3).\n");
//         }
//         break;
//         case 2:
//         return 1;
//         break;
//         default:
//             printf("\nNilai inputan tidak valid, silahkan pilih salah satu angka (1 atau 2).\n");
//     }


//     return 0;
// }


