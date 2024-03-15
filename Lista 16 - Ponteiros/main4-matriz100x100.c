/*Escreva um programa que declare uma matriz 100x100 de inteiros. Você deve
inicializar a matriz com zeros usando ponteiros. Preencha depois a matriz com os
números de 1 a 10.000 usando ponteiros.
*/

#include <stdio.h>

main()
{
    int matriz[100][100], i, l;
    int *p;

    p = &matriz[0][0];

    for(i=0; i<10000; i++) {
        *p=i;
        // printf("%d\n", *p);
        p++;
    }

    p = &matriz[0][0];

    for(i=0; i<100; i++) {
        for(l=0; l<100; l++) {
            printf("[ %d ] ", *p);
            p++;
        }
        printf("\n");
    }
}