/*Nama File : BilPrimaN*/
/*Deskripsi : Menentukan bilangan prima sampai ke N / bukan*/
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Jumat, 10 Maret 2023 jam 10.00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
        int N; /*sebuah input*/
        int i; /*bilangan prima sampai ke N*/
        int a; /*cek bilangan prima i*/
        int b; /*faktor pembagi i*/
    /*Algoritma*/;
        printf("Menentukan bilangan prima sampai ke N");
        printf("\nMasukkan Input (N) = ");
        scanf("%d",&N);
        i = 0;
        a = 0;
        b = 0;
        for (i = 1; i <= N; i++)
        {
            a = 0;
            for (b = 1; b <= i; b++)
            {
                if (i % b ==0) {
                    a+=1;
                }
            }
            if (a==2){
                printf ("%d\n",i);
            }
        }
    return 0;
}






