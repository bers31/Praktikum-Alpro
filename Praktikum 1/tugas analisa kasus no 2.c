/*Nama File : namaHari*/
/*Deskripsi : Menentukan hari dari sebuah angka 1-7 (senin-minggu)*/
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Selasa, 28 Februari 2023 jam 16.35*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
        int i; /*sebuah input*/

    /*Algoritma*/;
        printf("Menentukan angka hari/ bukan");
        printf("\nMasukkan Input (i) = ");
        scanf("%d",&i);
            if (i>0 && i<8){
                if (i==1){
                    printf("Senin");
                }
                else if (i==2){
                    printf("Selasa");
                }
                else if (i==3){
                    printf("Rabu");
                }
                 else if (i==4){
                    printf("Kamis");
                }
                 else if (i==5){
                    printf("Jumat");
                }
                 else if (i==6){
                    printf("Sabtu");
                }
                 else {
                    printf("Minggu");
                }
            }
            else {
                printf("Masukan nomor hari tidak tepat");
            }
    return 0;
}
