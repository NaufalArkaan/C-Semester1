// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     FILE* fptr;
//     // enum 
//     // {
//     //     TULIS = 1,
//     //     BACA,
//     // };
//     int pilihan;
//     char nama[100];
//     long long int nim;
//     char ps[100];

//     char addData[1000]; 
    
//     printf("Pilih Aksi : \n");
//     printf("1. Tulis data mahasiswa \n");
//     printf("2. Baca data mahasiswa \n");
//     printf("3. Keluar \n");
//     printf("Masukkan Pilihan : ");scanf("%d", &pilihan);
//     getchar();
//     printf("\n");

//     switch (pilihan)
//     {
//     case 1:
//         fptr = fopen("database.txt", "a");
//         printf("Masukkan Nama : ");fgets(nama, sizeof(nama), stdin);
//         printf("Masukkan NIM : ");scanf("%lld", &nim);
//         getchar();
//         printf("Masukkan Program Studi : ");fgets(ps, sizeof(ps), stdin);
//         if (strlen(nama) != 0 && strlen(ps) != 0)
//         {
//             if (fptr != NULL)
//             {
//                 fprintf(fptr, "Nama : %s", nama);
//                 fprintf(fptr, "NIM : %lld\n", nim);
//                 fprintf(fptr, "Program Studi : %s\n", ps);
//                 printf("\n.   .   .");
//                 printf("\nData Mahasiswa Berhasil Di Tulis Ke File");
//             } else {
//                 printf("File Gagal Di buka dan data tidak dapt ditambahkan");
//             }
//             fclose(fptr);
//             printf("\n\n");
//             main();
//         } else {
//             printf("Kesalahan");
//         }
        

//         break;
//     case 2:
//         fptr = fopen("database.txt", "r");
//         printf("Data Mahasiswa : \n");
//         if (fptr != NULL)
//         {
//             /* code */
//             while (fgets(addData, sizeof(addData), fptr))
//             {
//                 printf("%s", addData);
//             }
//             // printf("Coba2");
//             fclose(fptr);
//             main();
//         } else {
//             printf("Error");
//         }
        

//         break;
//     case 3 :
//         printf("Terima Kasih Telah Menggunakan Sistem Kami!!");
//         break;
//     default:
//         main();
//         break;
//     }


//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fptr;
    // enum 
    // {
    //     TULIS = 1,
    //     BACA,
    // };
    int pilihan;
    char nama[100];
    long long int nim;
    char ps[100];

    char addData[1000]; 
    
    printf("Pilih Aksi : \n");
    printf("1. Tulis data mahasiswa \n");
    printf("2. Baca data mahasiswa \n");
    printf("3. Keluar \n");
    fptr = fopen("database1.txt", "a");
    printf("Masukkan Pilihan : ");scanf("%d", &pilihan);
    getchar();
    printf("\n");

    switch (pilihan)
    {
    case 1:
        fptr = fopen("database1.txt", "a");
        printf("Masukkan Nama : ");fgets(nama, sizeof(nama), stdin);
        printf("Masukkan NIM : ");scanf("%lld", &nim);
        getchar();
        printf("Masukkan Program Studi : ");fgets(ps, sizeof(ps), stdin);
        if (strlen(nama) != 0 && strlen(ps) != 0)
        {
            if (fptr != NULL)
            {
                fprintf(fptr, "Nama : %s", nama);
                fprintf(fptr, "NIM : %lld\n", nim);
                fprintf(fptr, "Program Studi : %s\n", ps);
                printf("\n.   .   .");
                printf("\nData Mahasiswa Berhasil Di Tulis Ke File");
            } else {
                printf("File Gagal Di buka dan data tidak dapt ditambahkan");
            }
            fclose(fptr);
            printf("\n\n");
            main();
        } else {
            printf("Kesalahan");
        }
        

        break;
    case 2:
        fptr = fopen("database1.txt", "r");
        printf("Data Mahasiswa : \n");
        if (fptr != NULL)
        {
            /* code */
            while (fgets(addData, sizeof(addData), fptr))
            {
                printf("%s", addData);
            }
            // printf("Coba2");
            fclose(fptr);
            main();
        } else {
            printf("Error");
        }
        

        break;
    case 3 :
        printf("Terima Kasih Telah Menggunakan Sistem Kami!!");
        break;
    default:
        main();
        break;
    }


    return 0;
}