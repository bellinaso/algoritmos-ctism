/*Criar um algoritmo que possa armazenar as alturas de dez atletas de cinco delegações que
participarão dos jogos de verão. Imprimir a maior altura de cada delegação.*/

#include <stdio.h>

#define line 5
#define colum 10

main()
{
    int h[line][colum], l, c, i;

    printf("Digite a altura dos jogadores por delegacao:\n");
    for (i=0; i<30; i++) {
        printf("=");
    }


    // Inserindo as alturas do jogadores
    for (l=0;l<line; l++) {
        for (c=0; c<colum; c++) {
            printf("\nJogador %d da %da delecacao: ", c+1, l+1);
            scanf("%d", &h[l][c]);
        }
    }

    // Mostrando a tabela de alturas
    for (i=0; i<13; i++) {
        printf(" ");
    }
    printf("Altura dos jogadores:");
    for (l=0; l<line; l++) {
        printf("\nDelegacao %d: ", l+1);
        for (c=0; c<colum; c++) {
            printf("[ %dm ] ", h[l][c]);
        }
    }
}
