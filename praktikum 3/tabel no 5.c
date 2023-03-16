/*Nama File : JumBarKolMat*/
/*Deskripsi : Menghitung jumlah baris dan kolom suatu tabel*/
/*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
/*Tanggal   : Rabu, 15 Maret 2023 jam 15.40*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
        int T[3][3]={{1,3,5},{2,5,2},{4,2,4}};/*sebuah tabel*/
        int sumBaris,sumKolom; /*total baris dan total kolom tabel*/
        int i,j; /*ngecek baris dan kolom pertama sampai terakhir*/

    /*Algoritma*/
        printf("Menghitung jumlah baris dan kolom suatu tabel \n");
        sumBaris=0;
        sumKolom=0;
        for (i=0;i<3;i++){
            sumBaris=0;
            sumKolom=0;
            for (j=0;j<3;j++){
                sumBaris += T[i][j];
                sumKolom += T[j][i];
            }
            printf("Jumlah pada baris %d: %d\n", i+1, sumBaris);
            printf("Jumlah pada kolom %d: %d\n", i+1, sumKolom);
        }
    return 0;
}








