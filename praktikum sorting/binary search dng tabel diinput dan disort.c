#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar elemen jika elemen saat ini lebih besar dari elemen berikutnya
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void countingSort(int arr[], int n) {
    int max = arr[0];
    int i, j;
    // Mencari nilai maksimum dalam array //
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Membuat array penampung dan menginisialisasi dengan 0
    int* count = (int*)calloc(max + 1, sizeof(int));

    // Menghitung jumlah kemunculan setiap elemen
    for (i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Menyusun ulang array berdasarkan jumlah kemunculan
    int k = 0;
    for (i = 0; i <= max; i++) {
        for (j = 0; j < count[i]; j++) {
            arr[k++] = i;
        }
    }

    // Mengebebaskan memori yang dialokasikan
    free(count);
}

void Insertionsort(int arr[], int n){
    //sort paling efektif//
    int i;
    int temp;
    int j;
    for(i=1;i<n;i++){
        temp = arr[i];
        j= i-1;
        while(j>=0 &&arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}
void SelectionSort(int arr[], int n){
    // mencari nilai minimum dari array //
    int i,j;
    int min,temp;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

int main()
{
    /*Kamus*/;
        int N;
        int i;
        char x;
    /*Algoritma*/
        scanf("%d",&N);
        int T[N];
        for (i=0;i<N;i++){
            scanf("%d",&T[i]);
        }
        printf("array sebelum diurutkan: \n");
        for (i=0;i<N;i++){
            printf("%d",T[i]);
        }
        printf("\nPilih sort yang digunakan \n");
        printf("A: Buble Sort\n");
        printf("B: Counting Sort\n");
        printf("C: Insertion Sort\n");
        printf("D: Selection Sort\n");

        scanf("\n%c",&x);
        switch(x){
        case 'A':
            bubbleSort(T,N);
        case 'B':
            countingSort(T,N);
        case 'C':
            Insertionsort(T,N);
        case 'D':
            SelectionSort(T,N);
     }
     printf("array setelah diurutkan: \n");
        for (i=0;i<N;i++){
            printf("%d",T[i]);
        }
return 0;
}



