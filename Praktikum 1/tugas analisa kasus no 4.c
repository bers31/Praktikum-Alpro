/*Nama File : hitungTahanan*/
/*Deskripsi : Menentukan nilai total dari masukan 3 buah tahanan */
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Selasa, 28 Februari 2023 jam 16.45*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
        int i; /*sebuah input*/
        int j; /*sebuah input*/
        int k; /*sebuah input*/
        int l; /*sebuah input*/
    /*Algoritma*/;
        printf("Menentukan total nilai tahanan");
        printf("\nMasukkan Input (i) = ");
        scanf("%d",&i);
        printf("\nMasukkan Input (j) = ");
        scanf("%d",&j);
        printf("\nMasukkan Input (k) = ");
        scanf("%d",&k);
            if (i>=0 && j>=0 && k>=0){
                l = i+j+k;
                printf("%d",l);
            }
            else{
                printf("Masukkan tahanan tidak boleh negatif");
            }

    return 0;
}

