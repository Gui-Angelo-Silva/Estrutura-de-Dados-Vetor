#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetA[N], vetB[N], vetC[2*N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vetA[i]=rand()%11;
        vetB[i]=rand()%11;
        printf("\n\nA[%d]=%2d     -     B[%d]=%2d\n",i,vetA[i],i,vetB[i]);
    }
    
    for(int i=0; i<N; i++){
        vetC[i] = vetA[i];
        vetC[i+N] = vetB[i];
    }
    printf("\n");
    for(int i=0; i<2*N; i++){
        printf("C[%d]=%2d\n",i,vetC[i]);
    }
}