/*Ler uma matriz 3x3 e mostrar seu conteúdo.*/

#include <stdio.h>

main()
{
    int l,c,m[3][3];

    for (l=0;l<3;l++) {
        for (c=0;c<3;c++) {
            printf("Entre com o indice %d %d da matriz: ", l, c);
            scanf("%d", &m[l][c]);
        }
    }
    for (l=0;l<3;l++) {
        for (c=0;c<3;c++) {
            printf("[ %d ] ", m[l][c]);
        }
        printf("\n");
    }
}
