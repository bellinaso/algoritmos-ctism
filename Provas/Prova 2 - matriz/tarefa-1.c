/*a) Fa�a um programa que permita ao usu�rio entrar com uma matriz 3 x 3 de n�meros inteiros. Em
seguida, gere um array unidimensional pela multiplica��o dos n�meros de cada linha da matriz e mostrar
na tela esse array*/


#include <stdio.h>

main()
{
    int m[3][3], v[3], l, c, i;

    // Usuário entra com os valores
    printf("Entre com os valores da matriz:\n");
    for (l=0; l<3; l++) {
        printf("\n");

        for (c=0; c<3; c++) {
            printf("[ Linha %d ] [ Coluna %d ]: ", l+1, c+1);
            scanf("%d", &m[l][c]);
        }
    }

    printf("Os valores das multiplicacoes das linhas sao:\n");
    for (l=0; l<3; l++) {
        // Em cada posição do vetor, vai adicionar 1 para multiplicar
        v[l] = 1;

        for (c=0; c<3; c++) {
            // 1 * o valor da matriz
           v[l] *= m[l][c];
        }
        // Mostra o valor da matriz
        printf("[ Linha %d ]: %d\n", l, v[l]);
    }
}
