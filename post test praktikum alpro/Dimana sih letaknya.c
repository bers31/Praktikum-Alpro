#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/;
        int N;/*panjang tabel*/
        int i;
        int x;
        int y;
        int count;

    /*Algoritma*/
        scanf("%d",&N);
        int T[N];

        for (i=0;i<N;i++){
            scanf("%d",&T[i]);
        }
        scanf("%d",&x);
        count=0;
        for (y=0;y<N;y++){
            if (T[y]==x){
                count=y+1;
            }
        }
if (count!=0){
    printf("%d",count);
}
else{
    printf("Tidak ada di array");
}
}

