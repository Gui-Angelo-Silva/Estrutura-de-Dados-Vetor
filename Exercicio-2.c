/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{   
    int vetA[N], vetB[N], vetC[2*N];
    srand(time(NULL));
    
    for(int i = 0; i < 5; i++){
        vetA[i] = rand() % 10;
        vetB[i] = rand() % 10;
        printf("A[%d]=%2d     -     B[%d]=%2d\n", i, vetA[i], i, vetB[i]);
    }
    
    for(int i = 0; i < N; i++){
        vetC[i*2] = vetA[i];
        vetC[i*2+1] = vetB[i];
    }
    printf("\n");
    for(int i = 0; i < 2*N; i++){
        printf("C[%d] = %2d\n", i, vetC[i]);
    }
}
