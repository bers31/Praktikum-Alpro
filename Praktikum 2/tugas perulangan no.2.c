/*Nama File : FaktorBil*/
/*Deskripsi : Menentukan faktor bilangan hingga ke N */
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Jumat, 10 Maret 2023 jam 09.55*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
        int N; /*sebuah input*/
        int i; /*faktor bilangan dari i sampai N*/

    /*Algoritma*/
        printf("Menentukan faktor bilangan integer");
        printf("\nMasukkan Input (N) = ");
        scanf("%d",&N);
        i = 0;
        for (i = 1; i <= N; i++)
        {
            if (N % i ==0) {
                printf ("%d\n",i);
            }
        }

    return 0;
}




