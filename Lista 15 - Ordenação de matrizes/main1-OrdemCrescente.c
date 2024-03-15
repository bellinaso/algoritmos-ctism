/*Escreva um programa que receba um vetor de números naturais e os ordene de forma crescente. Por
exemplo, o vetor [4, 5, 3, 3, 3, 5, 7, 7, 7, 7, 7] ficará da seguinte forma: [3, 3, 3, 4, 5, 5, 7, 7, 7, 7, 7].*/

#include <stdio.h>
#include <conio.h>

main()
{
    int l, c, aux, vetor[10];

    for(l=0; l<10; l++) {
        printf("[ %d/10 ] Insira um numero: ", l);
        scanf("%d", &vetor[l]);
    }

    for(l=0; l<10; l++) {
        for(c=l+1; c<10; c++) {
            if(vetor[l] > vetor[c]) {
                aux = vetor[l];
                vetor[l] = vetor[c];
                vetor[c] = aux;
            }
        }
        printf("\n%d", vetor[l]);
    }
}