/*Construa um programa que contenha dois vetores um do tipo int e outro do tipo float
de 10 posição já inicializados (0 até 9). Após mostre os valores que se encontram
dentro dos dois vetores. Faça esse procedimento utilizando ponteiros. */

#include <stdio.h>

#define NUM 10

main()
{
    int vetor1[NUM], vetor2[NUM];
    int *p1, *p2;
    int i, j;

    p1 = &vetor1;
    p2 = &vetor2;

    for(i=0; i<NUM; i++) {
        *p1 = i;
        *p2 = i;
        p1++;
        p2++;
    }

    p1 = &vetor1;
    p2 = &vetor2;

    for(i=0; i<NUM; i++) {
        printf("\nVetor 1: %d", *p1);
        printf("\nVetor 2: %d", *p2);
        p1++;
        p2++;
    }
}