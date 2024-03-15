/*01.Um radar de trânsito faz a medição de velocidade de veículos e, dependendo do valor, calcula a multa a ser
aplicada. Em uma determinada via esse radar foi configurado da seguinte forma:
 Se a velocidade for maior que 80 km/h, a multa é de R$ 360;
 Se a velocidade for maior que 60 km/h, a multa é de R$ 180;
 Se a velocidade for menor ou igual a 60 km/h, não há multa.
Escreva um algoritmo que calcule a multa de acordo com a velocidade de um veículo*/

#include <stdio.h>

main()
{
    int menu;

    printf("-- Sistema de multas --\n");
    printf("Selecione a opcao de acordo com a velocidade atingida:\n");
    printf("[ 1 ] Menor que 60km/h \n[ 2 ] Maior que 60km/h \n[ 3 ] Maior que 80km/h\n");
    printf("Opcao: ");
    scanf("%d", &menu);

    switch(menu)
    {
    case 1:
        printf("Voce nao foi multado!");
        break;

    case 2:
        printf("O valor da multa e: R$180,00");
        break;

    case 3:
        printf("O valor da multa e: R$360,00");
        break;

    default:
        printf("Opcao nao encontrada");
    }
}
