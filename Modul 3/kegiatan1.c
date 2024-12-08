#include <stdio.h>
enum Film{Spiderman = 1, Batman, Superman, Avengers, Joker};
enum JenisTicket{Reguler = 1 , VIP, VVIP};

int main() {
    int bioskop;
    int listFilm;
    float hargaFilm[5] = {50000, 55000, 60000, 70000, 45000}; 
    float hargaTicket[3] = {30000, 100000, 150000}; 
    float totalHarga;
    char member;
    int pembayaran;
    float kembalian;

    printf("==== Bioskop ====\n");
    printf("Film: \n");
    printf("1. Spiderman - Rp.50000\n");
    printf("2. Batman - Rp.55000\n");
    printf("3. Superman - Rp.60000\n");
    printf("4. Avengers - Rp.70000\n");
    printf("5. Joker - Rp.45000\n");
    printf("Pilih film (1 - 5): ");
    scanf("%d", &bioskop);
    printf("\nJenis Tiket: \n");
    printf("1. Reguler - Rp.30000\n");
    printf("2. Reguler - Rp.100000\n");
    printf("3. Reguler - Rp.150000\n");
    printf("Pilih jenis tiket (1 - 3): ");
    scanf("%d", &listFilm);
    printf("Apakah Anda adalah member? (Y/N): ");
    scanf(" %c", &member);


    if(bioskop >= Spiderman && bioskop <= Joker && listFilm >= Reguler && listFilm <= VVIP ){
        totalHarga = hargaFilm[bioskop - 1] + hargaTicket[listFilm - 1];
    }
    if(member == 'Y' || member == 'y'){
        totalHarga *= 0.90;
    };

    printf("\nTotal harga: Rp.%.2f\n", totalHarga);
    printf("Alamat memori variabel total: %p\n", (void *)&totalHarga);
    printf("Masukan uang pembayaran: ");
    scanf("%d", &pembayaran);

    if(pembayaran > totalHarga){
        kembalian = pembayaran - totalHarga;
        printf("Kembalian Anda: Rp.%.2f", kembalian);
    }else if(pembayaran < totalHarga){
        printf("Uang anda kurang");
    }else if(pembayaran == totalHarga){
        printf("Terima Kasih.");
    }
    return 0;
}