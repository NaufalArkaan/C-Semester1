#include <stdio.h>

//Contoh kondisi while
// int main() {
//     int kondisi = 0;
//     while(kondisi < 4){
//         printf("%d\n", kondisi);
//         kondisi++;
//     }

//     return 0;
// }

//

// int main() {
//     int number = 0;
//     int sum = 0;

//     printf("Enter numbers to add to the sum (enter 0 to stop):\n");
//     scanf("%d", &number);

//     while(number != 0){
//         sum += number;
//         printf("Current sum: %d\n", sum);
//         scanf("%d", &number);
//     }

//     printf("Final sum: %d\n", sum);
//     return 0;
// }

//do while
// int main(){
// int i = 5;

// do{
//     printf("%d\n", i);
//     i++;
// }
// while (i < 5);

//     return 0;
// }

// #include <string.h>
// int main() {
//     char password[] = "secret";
//     char input[20];
//     do {
//         printf("Enter the password: ");
//         scanf("%s", input);
//     } while(strcmp(input, password) != 0);
//     printf("Access granted!\n");

//     return 0;
// }


//for loop
// int main(){
//     for(int i = 0; i < 5; i++){
//         printf("iterasi ke-%d\n", i);
//     }

//     return 0;
// }

// int main(){
//     int i = 1, number = 0;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     for(i = 1; i<= 10; i++){
//         printf("%d \n",(number*i));
//     }
//     return 0;
// }


//nested loop
// int main(){
//     int tinggi = 5;

//     for(int baris = 1; baris <= tinggi; baris++){
//         for(int kolom = 1; kolom <= baris; kolom++){
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(){
//     int rows;
//     int colums;
//     int k = 1;
//     printf("Enter the number of rows :");
//     scanf("%d", &rows);
//     printf("\nEnter the number of colums :");
//     scanf("%d", &colums);
//         int a[rows][colums];
//         int i = 1;
//     while(1 <= rows){
//          int j = 1;
//         while(j <= colums){
//             printf("%d\t", k);
//             k++;
//             j++;
//         }
//         i++;
//         printf("\n");
//     }

//     return 0;
// }

int main() {
    for (int i=1; i<= 5; i++){
        printf("%d", i);
        if(i == 3){
            break;
        }
    }
    printf("\n");

    for (int j=1; j<=5; j++){
        if(j == 3){
            continue;
        }
        printf("%d", j);
    }
    printf("\n");

    return 0;
}

// int main() {
//     int var = 1;

//     switch(var) {
//         case 1:
//             printf("Case 1 is Matched.");
//             break;
//         case 2:
//             printf("Case 2 is Matched.");
//             break;
//         case 3:
//             printf("Case 3 is Matched.");
//             break;

//         default:
//             printf("Default case is MAtched.");

//     }

//     return 0;
// }

