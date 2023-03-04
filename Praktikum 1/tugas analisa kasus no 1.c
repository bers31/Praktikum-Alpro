/*Nama File : bilInteger*/
/*Deskripsi : Menentukan sebuah masukkan termasuk sebuah bilangan (positif, nol, negatif) atau bukan*/
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Selasa, 28 Februari 2023 jam 16.30*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
        int i; /*sebuah input*/

    /*Algoritma*/;
        printf("Menentukan kategori bilangan / bukan");
        printf("\nMasukkan Input (i) = ");
        if (scanf("%d",&i)){
            if (i>0){
                printf("Bilangan Bulat Positif");
            }
            else if (i==0){
                printf("Nol");
            }
            else {
                printf("Bilangan Bulat Negatif");
            }
        }
        else {
            printf("Bukan termasuk sebuah bilangan");
        }
    return 0;
}
