/*Criar um algoritmo que leia e armazene os elementos de uma matriz M inteira
5 x 5 e gere/imprima o vetor DIF, que é a diferença entre os vetores A e B assim gerados:
 vetor A: contém todos os elementos abaixo da DS
 vetor B: contém todos os elementos acima da DP*/

#include <stdio.h>

main()
{
    int m[5][5], vds[10], vdp[10], dif[10];
    int l, c, cont;


    printf("Insira os valores da matriz:\n");
    for (l=0; l<5; l++) {
        printf("\n");

        for (c=0; c<5; c++) {
            printf("[ Linha %d ] [ Coluna %d ]: ", l+1, c+1);
            scanf("%d", &m[l][c]);
        }

        
    }
    // laço para diagonal principal
    printf("\nOs valores em cima da diagonal principal sao: \n");
    cont = 0;
    for (l=0; l<5; l++) {
        for (c=0; c<5; c++) {
            if (c > l && l != c) {
                vdp[cont] = m[l][c];
                printf("[ %02d ]", vdp[cont]);
                cont += 1;
            }
        }
    }
    cont = 0;
    printf("\nOs valores em baixo da diagonal secundaria sao: \n");
    // laço para diagonal secundária
    for (l=0; l<5; l++) {
        for (c=0; c<5; c++) {
            // se a soma da linha e da coluna estiver entre 5 o 8...
            if (l + c >= 5 && l + c <= 8) {
                vds[cont] = m[l][c];
                printf("[ %02d ]", vds[cont]);
                cont+=1;
            }
        }
    }

    printf("\nA diferenca entre os vetores eh:\n");
    for (l=0; l<10; l++) {
        dif[l] = (vdp[l] - vds[l]);
        printf("[ %02d ]", dif[l]);
    }
}
/*
[ 0, 0 ][ 0, 1 ][ 0, 2 ][ 0, 3 ][ 0, 4 ]
[ 1, 0 ][ 1, 1 ][ 1, 2 ][ 1, 3 ][ 1, 4 ]
[ 2, 0 ][ 2, 1 ][ 2, 2 ][ 2, 3 ][ 2, 4 ]
[ 3, 0 ][ 3, 1 ][ 3, 2 ][ 3, 3 ][ 3, 4 ]
[ 4, 0 ][ 4, 1 ][ 4, 2 ][ 4, 3 ][ 4, 4 ]
*/
