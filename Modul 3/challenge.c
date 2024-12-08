#include <stdio.h>

int main(){
    int a;
    int pilihan;
    printf("\nKlik 1 untuk Hitung, Klik 2 untuk keluar\n");
    printf("1. Hitung\n");
    printf("2. Keluar\n");
    printf("\nPilihan Anda: ");
    scanf("%d", &pilihan);

    switch(pilihan){
    case 1:
    printf("Masukan angka : ");
    scanf("%d", &a);
        if(a > 0){
            printf("%d Adalah bilangan positif\n", a);
            main();
        }else if(a < 0){
            printf("%d Adalah bilangan negatif\n", a);
            main();
        }else{
            printf("%d adalah bilangan nol\n", a);
            main();
        }
        break;
    case 2:
        return 0;
    default:
        printf("Nilai tidak valid.");
    }

}