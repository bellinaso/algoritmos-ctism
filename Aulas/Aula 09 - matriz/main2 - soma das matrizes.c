/*Ler duas matrizes A e B, cada uma de duas dimensões com 2 linhas e
2 colunas. Construir uma matriz C de mesma dimensão, onde C é formada pela
soma dos elementos da matriz A com os elementos da matriz B. Gere a matriz A e
B com números aleatórios.*/


#include <stdio.h>
#include <stdlib.h>

main()
{
    int l, c, A[2][2], B[2][2], C=0;

    for (l=0;l<2;l++) {
        for (c=0;c<2;c++) {
            A[l][c] = rand() % 50;
        }
    }
    for (l=0;l<2;l++) {
        for (c=0;c<2;c++) {
            B[l][c] = rand() % 50;
        }
    }


    for (l=0;l<2;l++) {
        for (c=0;c<2;c++) {
            C+=A[l][c];
            C+=B[l][c];
        }
    }
    printf("A soma dos valores do vetor:\n");

    // Mostra o vetor A
    printf("A:\n");
    for (l=0;l<2;l++) {
        for (c=0;c<2;c++) {
            printf("[ %d ]", A[l][c]);
        }
        printf("\n");
    }
    // Mostra o vetor B
    printf("B:\n");
    for (l=0;l<2;l++) {
        for (c=0;c<2;c++) {
            printf("[ %d ]", B[l][c]);
        }
        printf("\n");
    }

    // Mostra o resultado
    printf("Eh igual a: %d", C);
}
