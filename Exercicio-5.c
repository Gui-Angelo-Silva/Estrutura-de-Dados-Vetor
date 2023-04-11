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
    int vet[N];
    srand(time(NULL));
    
    for(int i = 0; i < 5; i++){
        vet[i] = rand() % 10;
        printf("vet[%d] = %2d \n", i, vet[i]);
    }
    printf("\n\n");
    for(int i = 0; i < 5; i++){
        if(vet[i] % 2 != 0){
            printf("vet[%d] = %2d \n", i, vet[i]);
        }
    }
}

