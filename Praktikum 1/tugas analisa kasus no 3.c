/*Nama File : namaBulan*/
/*Deskripsi : Menentukan bulan dari sebuah angka 1-12 (januari-desember)*/
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Selasa, 28 Februari 2023 jam 16.40*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
        int i; /*sebuah input*/

    /*Algoritma*/;
        printf("Menentukan angka bulan/ bukan");
        printf("\nMasukkan Input (i) = ");
        scanf("%d",&i);
            if (i>0 && i<13){
                if (i==1){
                    printf("Januari");
                }
                else if (i==2){
                    printf("Februari");
                }
                else if (i==3){
                    printf("Maret");
                }
                 else if (i==4){
                    printf("April");
                }
                 else if (i==5){
                    printf("Mei");
                }
                 else if (i==6){
                    printf("Juni");
                }
                else if (i==7){
                    printf("Juli");
                }
                else if (i==8){
                    printf("Agustus");
                }
                else if (i==9){
                    printf("September");
                }
                else if (i==10){
                    printf("Oktober");
                }
                else if (i==11){
                    printf("November");
                }
                 else {
                    printf("Desember");
                }
            }
            else {
                printf("Masukan nomor hari tidak tepat");
            }
    return 0;
}

