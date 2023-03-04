/*Nama File : CekSegitiga*/
/*Deskripsi : Menentukan jenis segitiga berdasarkan nilai sisi yang ada */
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Selasa, 28 Februari 2023 jam 16.50*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
        int i; /*sebuah input*/
        int j; /*sebuah input*/
        int k; /*sebuah input*/

    /*Algoritma*/;
        printf("Menentukan total nilai tahanan");
        printf("\nMasukkan Input (i) = ");
        scanf("%d",&i);
        printf("\nMasukkan Input (j) = ");
        scanf("%d",&j);
        printf("\nMasukkan Input (k) = ");
        scanf("%d",&k);
            if (i>0 && j>0 && k>0){
                if (i==j && i==k){
                    printf("Segitiga Sama Sisi");
                }
                else if ((i==j && i!=k) || (j==k && j!=i) || (i==k && i!=j)){
                    printf("Segitiga Sama Kaki");
                }
                else{
                    printf("Segitiga Sembarang");
                }
            }
            else{
                printf("Terdapat nilai yang bukan sisi segitiga");
            }

    return 0;
}


