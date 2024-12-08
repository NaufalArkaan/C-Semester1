#include <stdio.h>

int main(){
    int jumlah_mahsiswa;
    int nilai_matematika[10];
    int nilai_fisika[10];
    int nilai_kimia[10];
    int count = 0;
    int total_matematika = 0;
    int total_fisika = 0;
    int total_kimia = 0;
    float rata_rata_matematika = 0;
    float rata_rata_fisika = 0;
    float rata_rata_kimia = 0;
    float rata_rata_keseluruhan;
    char matkul[3][15] = {"Matematika", "Fisika", "Kimia"};

    printf("Masukan jumlah mahasiswa :");scanf("%d", &jumlah_mahsiswa);

    if(jumlah_mahsiswa > 0){
    for(int i=0; i < jumlah_mahsiswa; i++){
        printf("Masukan nilai untuk mahasiswa ke-%d (Matematika, Fisika, Kimia): \n", i+1);scanf("%d %d %d", &nilai_matematika[i], &nilai_fisika[i], &nilai_kimia[i]);
        continue;
    }
    }

    printf("\nData Nilai Ujian:\n");
    while(jumlah_mahsiswa > 0){
      printf("Mahasiswa\t%s\t%s\t   %s\n", matkul[0], matkul[1], matkul[2]);
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
  printf("Matematika: %.2f\n", rata_rata_matematika);
  rata_rata_fisika = (float)total_fisika / count;
  printf("Fisika: %.2f\n", rata_rata_fisika);
  rata_rata_kimia = (float)total_kimia / count;
  printf("Kimia: %.2f\n", rata_rata_kimia);
  rata_rata_keseluruhan = (rata_rata_matematika + rata_rata_fisika + rata_rata_kimia) / 3;
  printf("Rata-rata Keseluruhan: %.2f\n", rata_rata_keseluruhan);

    return 0;
}