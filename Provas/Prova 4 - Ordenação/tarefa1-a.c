/*Receber um nome e imprimir as letras na posição ímpar. No final
do programa o nome deve ser mostrado ao usuário.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
    int i;
    char nome[20];

    printf("Entre com um nome (max: 20) ");
    gets(nome);

    printf("\nAs letras nas posicoes impares sao: ");
    for(i=0; i<strlen(nome)-1; i++) {
        if(i%2 != 0) {
            printf("%c", nome[i]);
        }
    }
    printf("\nO nome eh: %s", nome);
}