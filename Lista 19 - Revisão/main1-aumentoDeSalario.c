// A empresa XKW concedeu um bônus de 20% do valor do salário a todos os funcionários com tempo de trabalho na empresa igual ou superior a 5 anos e de 10% aos demais. Faça um um programa em C que receba o salário e o tempo de serviço de um funcionário, calcule e mostre o valor do bônus recebido por ele.
#include <stdio.h>

float aumento(float salario)
{
    return(salario+(salario*20/100));
}

int main()
{
    int tempo;
    float salario;

    printf("Aumento de salario\n");
    printf("==================\n");
    printf("Entre com o tempo que esta trabalhando: ");
    scanf("%d", &tempo);

    if(tempo >= 5) {
        printf("Entre com o salario atual: ");
        scanf("%f", &salario);
    }
    else {
        printf("Desculpe :/ voce nao tem tempo o suficiente para receber aumento.");
    }
    printf("O seu novo salario eh de: %.2fR$", aumento(salario));
}