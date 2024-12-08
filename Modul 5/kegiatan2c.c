#include <stdio.h>

int main(){
    int jumlah_mahsiswa, jumlah_mata_kuliah, count = 0, total_matematika = 0, total_fisika = 0, total_kimia = 0, j;
    float rata_rata_matematika = 0, rata_rata_fisika = 0, rata_rata_kimia = 0, rata_rata_keseluruhan;

    printf("Masukan jumlah mahasiswa :");scanf("%d", &jumlah_mahsiswa);
    printf("Masukan angka jumlah mata kuliah (Wajib input angka 3): "); scanf("%d", &jumlah_mata_kuliah);
    int nilai_matematika[jumlah_mahsiswa], nilai_fisika[jumlah_mahsiswa], nilai_kimia[jumlah_mahsiswa];
    char matkul[jumlah_mata_kuliah], print_mata_kuliah[jumlah_mata_kuliah][50];
    if(jumlah_mahsiswa > 0){
    for( j=0; j < jumlah_mata_kuliah; j++){
        printf("Masukan nama mata kuliah ke-%d: \n", j+1);scanf("%s", &print_mata_kuliah[j]);
        continue;
    }
    }
    for(int i=0; i < jumlah_mahsiswa; i++){
        printf("Masukan nilai untuk mahasiswa ke-%d (%s, %s, %s): \n", i+1, print_mata_kuliah[0], print_mata_kuliah[1], print_mata_kuliah[2]);scanf("%d %d %d", &nilai_matematika[i], &nilai_fisika[i], &nilai_kimia[i]);
        continue;
    }
    printf("\nData Nilai Ujian:\n");
    while(jumlah_mahsiswa > 0){
      printf("Mahasiswa\t%s\t        %s\t   %s\n", print_mata_kuliah[0], print_mata_kuliah[1], print_mata_kuliah[2]);
      break;
    }
    for(int k=0; k < jumlah_mahsiswa; k++){
    total_matematika+=nilai_matematika[k];
    total_fisika+=nilai_fisika[k];
    total_kimia+=nilai_kimia[k];
    count ++;
    printf("Mhs %d\t        %.2f\t        %.2f\t   %.2f \n", k+1, (float)nilai_matematika[k], (float)nilai_fisika[k], (float)nilai_kimia[k]);
    }
    printf("\nRata-rata Nilai:\n");
    rata_rata_matematika = (float)total_matematika / count;
    printf("%s: %.2f\n", print_mata_kuliah[0], rata_rata_matematika);
    rata_rata_fisika = (float)total_fisika / count;
    printf("%s: %.2f\n", print_mata_kuliah[1], rata_rata_fisika);
    rata_rata_kimia = (float)total_kimia / count;
    printf("%s: %.2f\n", print_mata_kuliah[2], rata_rata_kimia);
    rata_rata_keseluruhan = (rata_rata_matematika + rata_rata_fisika + rata_rata_kimia) / 3;
    printf("Rata-rata Keseluruhan: %.2f\n", rata_rata_keseluruhan);

    return 0;
}