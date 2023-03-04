/*Nama File : kallSS*/
/*Deskripsi : Membuat kalkulator sederhana yang menghitung operasi 2 bilangan bulat */
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Selasa, 28 Februari 2023 jam 16.55*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
        float iA; /*sebuah input*/
        float iB; /*sebuah input*/
        char O; /*sebuah operasi*/
        float a; /*hasil operasi*/
        float b; /*hasil operasi*/
        float c; /*hasil operasi*/
        float d; /*hasil operasi*/
        int e; /*hasil operasi*/
        int f; /*hasil operasi*/
        char trash;

    /*Algoritma*/;
        printf("Menentukan operasi 2 bilangan integer");
        printf("\nMasukkan Input (iA) = ");
        scanf("%f",&iA);
        printf("\nMasukkan Input (iB) = ");
        scanf("%f",&iB);
        printf("\nMasukkan Operasi (O) = ");
        scanf("%c", &trash);
        scanf("%c",&O);
            if (O=='a' || O=='b' || O=='c' || O=='d' || O=='e' || O=='f'){
                if (O=='a'){
                    a=iA+iB;
                    printf("%f",a);
                }
                else if (O=='b'){
                    b=iA-iB;
                    printf("%f",b);
                }
                else if (O=='c'){
                    c=iA*iB;
                    printf("%f",c);
                }
                else if (O=='d'){
                    float d=iA/iB;
                    printf("%f",d);
                }
                else if (O=='e'){
                    int i= iA;
                    int u= iB;
                    e=i/u;
                    printf("%d",e);
                }
                else {
                    int x = iA;
                    int y = iB;
                    f=x % y;
                    printf("%d",f);
                }
            }
            else {
                printf("Bukan pilihan menu yang benar");
            }
    return 0;
}



