/*Escreva um programa que recebe do usuário uma string S, um caractere C, e uma posição I e devolve o
índice da primeira posição da string onde foi encontrado o caractere C. A procura deve começar a partir da
posição I.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
    char string[70], caractere;
    int posicao, i;

    printf("Entre com uma string: ");
    gets(string);

    printf("Entre com um caractere a ser procurado: ");
    scanf(" %c", &caractere);

    printf("Entre com uma posicao de inicio a procura: ");
    scanf("%d", &posicao);

    for(i=posicao; i<strlen(string); i++) {
        if(caractere == string[i]) {
            printf("O caractere '%c' foi encontrado na posicao %d", caractere, i);
            break;
        }
    }
}