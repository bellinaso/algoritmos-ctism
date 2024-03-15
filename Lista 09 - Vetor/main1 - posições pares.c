/*Escreva um programa que leia um vetor V[15] de números inteiros, mostrar o conteúdo das
posições pares.*/

#include <stdio.h>

main()
{
    int v[15], i;

    for(i=0;i<15;i++) {
        printf("Digite o %do inteiro: ", i);
        scanf("%d", &v[i]);
    }
    printf("Os numeros nas posicoes pares sao: ");
    for(i=0;i<15;i++) {
        if(i%2==0) {
            printf("\nPosicao %d: %d", i, v[i]);
        }
    }
}
