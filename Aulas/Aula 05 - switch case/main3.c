/*Desenvolva um programa que receba como entrada um número inteiro que represente um
dos 7 dias da semana e imprima na tela se esse dia é útil, final de semana ou inválido.*/

#include <stdio.h>

main()
{
    int semana_num;

    printf("Digite um dia da semana:\n");
    printf("[ 1 ] Domingo \n[ 2 ] Segunda-feira \n[ 3 ] Terca-feira \n[ 4 ] Quarta-feira \n[ 5 ] Sexta-feira \n[ 6 ] Sabado");
    printf("\nSua opcao: ");
    scanf("%d", &semana_num);

    printf("\nO dia selecionado e: ");
    switch(semana_num)
    {
    case 1:
        printf("fim de semana");
        break;
    case 2:
        printf("util");
        break;
    case 3:
        printf("util");
        break;
    case 4:
        printf("util");
        break;
    case 5:
        printf("util");
        break;
    case 6:
        printf("util");
        break;
    case 7:
        printf("fim de semana");
        break;
    default:
        printf("invalido!");
    }

}
