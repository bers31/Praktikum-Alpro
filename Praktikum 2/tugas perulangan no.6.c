/*Nama File : BilSempN*/
/*Deskripsi : Menentukan bilangan sempurna sampai ke N / bukan*/
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Jumat, 10 Maret 2023 jam 10.05*/

#include <stdio.h>
#include <stdlib.h>
#define forr(i,N) for (i=1; i<=N; i++)

int main()
{

    /*Kamus*/;
        int N; /*sebuah input*/
        int i; /*nilai bilangan dari i sampai N*/
        int a; /*ngecek bilangan a sempurna / nda*/
        int b; /* */

    /*Algoritma*/
        printf("Menentukan  bilangan sempurna");
        printf("\nMasukkan Input (N) = ");
        scanf("%d",&N);
        forr(i,N){
            a=0;
            for (b=1; b<i; b++){
                if (i%b == 0){
                    a+=b;
                }
            }
            if (a==i){
                printf("%d\n",i);
            }
        }
        return 0;
}







