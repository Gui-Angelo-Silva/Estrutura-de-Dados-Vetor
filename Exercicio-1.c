/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 5

int main()
{
    int vet[N], soma, i, maior, menor;
    float raiz;
    srand(time(NULL));
    
    for(i = 0; i < 5; i++){
        vet[i] = rand() % 10;
        printf("vet[%d] = %2d \n", i, vet[i]);
        soma = soma + vet[i];
        
        if(i == 0){
            maior = vet[i];
            menor = vet[i];
        }
        
        if(vet[i] > maior){
            maior = vet[i];
        }
        
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    printf("\n");
    printf("Par.....");
    for(i = 0; i < N; i++){
        if(vet[i] % 2 == 0){
            printf("%d ", vet[i]);
        }
    }
    printf("\n");
    printf("Dobro.....");
    for(i = 0; i < N; i++){
        printf("%d ", vet[i] * 2);
    }
    printf("\n");
    printf("Raiz quadrada.....");
    for(i = 0; i < N; i++){
        if(vet[i] % 2 != 0){
            printf("%g ", raiz = sqrt(vet[i]));
        }
    }
    printf("\n");
    printf("Soma.....%d \n", soma);
    printf("Menor.....%d \n", menor);
    printf("Maior.....%d \n", maior);
}