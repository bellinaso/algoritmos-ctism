/*Leia uma matriz 5 x 5 e faça uma troca entre as diagonais superior e inferior. Escreva-a ao
final*/

#include <stdio.h>

#define ordem 5

main()
{
    int m[ordem][ordem], m2[ordem][ordem], l, c, i;

    for (l=0; l<ordem; l++) {
        for (c=0; c<ordem; c++) {
            m[l][c] = rand() % 30;
            printf("[ %02d ]", m[l][c]);
        }
        printf("\n");
    }

    for (i=0; i<ordem; i++) {
        for (l=0; l<ordem; l++) {
            for (c=0; c<ordem; c++) {

            }
        }
    }
}
