///*Nama File : SimetriTabel*/
///*Deskripsi : Menentukan apakah 2 buah tabel simetri / tidak*/
///*Pembuat   : Bernardo Nandaniar Sunia - 24060122120030*/
///*Tanggal   : Rabu, 15 Maret 2023 jam 15.30*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//    /*Kamus*/;
//        int N;/*panjang tabel*/
//        int M;/*panjang tabel*/
//        int T[11]={7,4,5,7,6,5,3,5,1,4,1}; /*sebuah tabel*/
//        int K[10]={7,4,5,7,6,5,3,5,1,4}; /*sebuah tabel*/
//        int count; /*cek semua elemen*/
//        int i; /*counter*/
//
//    /*Algoritma*/
//        printf("Menentukan apakah 2 buah tabel simetri / bukan \n");
//        N=sizeof(T)/sizeof(*T);/*membagi besar array dengan pointer(integer pointernya 4 byte, kalo array 2 integer besare 8 byte)*/
//        M=sizeof(K)/sizeof(*K);/*membagi besar array dengan pointer(integer pointernya 4 byte, kalo array 2 integer besare 8 byte)*/
//        if (N==M){
//            count=0;
//            for (i=0;i<10;i++){
//                if (T[i]==K[i]){
//                    count+=1;
//                }
//            }
//            if (count==N){
//                printf("simetri");
//            }
//            else{
//                printf("tidak simetri");
//            }
//        }
//        else{
//            printf("tidak simetri");
//        }
//
//
//    return 0;
//}
//
//
//
//
//
//
//
