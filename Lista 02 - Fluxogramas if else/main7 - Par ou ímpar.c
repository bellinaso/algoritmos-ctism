/*Desenvolver um fluxograma que leia um valor num�rico inteiro e mostre mensagem informando se o n�mero lido �
par ou �mpar.*/

#include <stdio.h>

main() {
    int num1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("O numero escolhido foi %d e ", num1);
    if (num1%2 == 0) {
        printf("e par.");
    }
    else {
        printf("e impar");
    }
}
