/*Nama File : CekBilSemp*/
/*Deskripsi : Menentukan apakah N bilangan sempurna / bukan*/
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Jumat, 10 Maret 2023 jam 10.05*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
        int N; /*sebuah input*/
        int i; /*nilai bilangan dari i sampai N*/
        int a; /*ngecek bilangan N sempurna / nda*/

    /*Algoritma*/
        printf("Menentukan  bilangan sempurna");
        printf("\nMasukkan Input (N) = ");
        scanf("%d",&N);
        i = 0;
        a = 0;
        for (i = 1; i < N; i++)
        {
            if (N % i ==0) {
                a+=i;
            }
        }
        if (a==N){
            printf("Bilangan Sempurna");
        }
        else {
            printf("Bukan Bilangan Sempurna");
        }
    return 0;
}






