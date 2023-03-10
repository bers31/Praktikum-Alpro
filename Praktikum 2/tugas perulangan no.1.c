/*Nama File : JumDeret*/
/*Deskripsi : Membuat total deret bilangan hingga ke N */
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Jumat, 10 Maret 2023 jam 09.50*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
        int N; /*sebuah input*/
        int i; /*nilai bilangan dari i sampai N*/
        int a; /*hasil bilangan ke N*/

    /*Algoritma*/
        printf("Menentukan total deret bilangan integer");
        printf("\nMasukkan Input (N) = ");
        scanf("%d",&N);
        a = 0;
        i = 0;
        for (i = 1; i <= N; i++)
        {
            a+=i;
        }
        printf ("a=%d\n",a);

    return 0;
}




