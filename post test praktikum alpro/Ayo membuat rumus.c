#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        char x;
        int N;
        int z;
        int i;
        i=0;
        z=0;
        scanf("%c",&x);
        scanf("%d",&N);
    switch(x){
        case 'a':
            for (i = 2; i <= N; i+=2){
                z+=i;
            }
        break;
        case 'b':
            for (i = 1; i <= N; i+=2){
                z+=i;
            }
        break;
        case 'c':
            for (i = 1; i <= N; i++){
                z+=i;
            }
        break;
     }
    printf("%d",z);

    return 0;
}

