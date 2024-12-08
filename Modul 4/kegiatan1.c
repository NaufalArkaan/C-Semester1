#include <stdio.h>

int main() {
    int input = 0;
    int total = 0;
    int i;
    int transaksi;

    printf("\n=== Pencatatan Transaksi ===\n");

    // while(input > 0){ //while loop
    //     total+=input;
    //     scanf("%d", &input);
    // }
    printf("\nMasukan transaksi selanjutnya (gunakan 0 untuk menyelesaikannya): \n");
    do{
        scanf("%d", &input);
        total+=input;
    }while(input > 0);

    printf("\nTotal dari transaksi tersebut adalah: %d \n", total);

    for(i=0; i == input; i++){ //for loop
        printf("\nApakah anda ingin mencatat transaksi lagi? (1=Ya, 0=Tidak): ");
        scanf("%d", &transaksi);

        for(i=1; i == transaksi; i++){ //nested loop
            main();
            continue; //continue
        }

        if(transaksi == 0){
            printf("\nTerima kasih!.\n");
            printf("\n=== Code Execution Successful ===");
            break; //break
        }
    }

    return 0;
}


// #include <stdio.h>

// int main(){
//     int masukan = 0;
//     int total = 0;
//     float count = 0;
//     float rata_rata;

//     printf("Masukan bilangan bulat (masukan angka negatif untuk berhenti): ");
//     scanf("%d", &masukan);

//     while(masukan >= 1){
//         total+=masukan;
//         count ++;
//         scanf("%d", &masukan);
//     }

//     printf("\n");
//     printf("Total bilangan: %d \n", total);
//     rata_rata = total / count; 
//     printf("Rata-rata bilangan: %.2f \n", rata_rata);
//     printf("\n=== Code Execution Successful ===");

//     return 0;
// }


