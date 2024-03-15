/*04- Os funcionários de uma empresa receberam um aumento de salário: técnicos: 50%, gerentes: 30% e
demais: 20%. Escrever um programa que receba como entrada o salário atual e o cargo do funcionário, e
apresente o novo salário após o aumento. Utilize o comando caso para desenvolver esse algoritmo.*/

#include <stdio.h>

int main()
{
    int menu;
    float salario;

    printf("-- Painel de aumento --");

    printf("\nInsira abaixo o seu cargo");
    printf("\n[ 1 ] Tecnico \n[ 2 ] Gerente \n[ 3 ] Demais cargos");
    printf("\nInsira seu salario atual: R$");
    scanf("%f", &salario);
    printf("Sua opcao: ");
    scanf("%d", &menu);

    if (menu >= 1 && menu <= 3){
        printf("Seu salario recebeu ");
    }
    switch (menu)
    {
    case 1:
        printf("50%% de aumento");
        printf("\nSeu novo salario e de R$%.2f", salario+(salario*50/100));
        break;

    case 2:
        printf("30%% de aumento");
        printf("\nSeu novo salario e de R$%.2f", salario+(salario*30/100));
        break;

    case 3:
        printf("20%% de aumento");
        printf("\nSeu novo salario e de R$%.2f", salario+(salario*20/100));
        break;
        
    default:
        printf("Nenhuma opcao encontrada");
        break;
    }
}
