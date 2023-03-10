/*Nama File : CekBilPrim*/
/*Deskripsi : Menentukan apakah N bilangan prima / bukan*/
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Jumat, 10 Maret 2023 jam 10.00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
        int N; /*sebuah input*/
        int i; /*bilangan prima dari N*/
        int a; /*ngecek bilangan N prima / nda*/

    /*Algoritma*/;
        printf("Menentukan bilangan prima");
        printf("\nMasukkan Input (N) = ");
        scanf("%d",&N);
        i = 0;
        a = 0;
        for (i = 1; i <= N; i++)
        {
            if (N % i ==0) {
                a+=1;
            }
        }
        if (a==2){
            printf("Bilangan Prima");
        }
        else {
            printf("Bukan Bilangan Prima");
        }
    return 0;
}





