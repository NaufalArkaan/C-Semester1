#include <stdio.h>

int main(){
    int masukan = 0;
    int total = 0;
    float count = 0;
    float rata_rata;

    printf("Masukan bilangan bulat (masukan angka negatif untuk berhenti): ");
    scanf("%d", &masukan);

    while(masukan >= 0){
        total+=masukan;
        count ++;
        printf("\nMasukan bilangan bulat (masukan angka negatif untuk berhenti): ");
        scanf("%d", &masukan);
    }

    printf("\n");
    printf("Total bilangan: %d \n", total);
    rata_rata = total / count; 
    printf("Rata-rata bilangan: %.2f \n", rata_rata);
    printf("\n=== Code Execution Successful ===");

    return 0;
}

// int main() {
//     int number = 0;
//     int sum = 0;

//     printf("Masukan bilangan bulat (masukan angka negatif untuk berhenti): \n");
//     scanf("%d", &number);

//     while(number >= 0){
//         sum += number;
//         printf("Current sum: %d\n", sum);
//         scanf("%d", &number);
//     }

//     printf("Final sum: %d\n", sum);
//     return 0;
// }