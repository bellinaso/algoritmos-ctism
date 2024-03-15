/*-Desenvolver um programa que calcule o índice de massa corpórea (IMC) de uma pessoa. Para elaborar o
programa, é necessário possuir dois dados: altura e peso da pessoa. Para cálculo do IMC, a fórmula matemática é a
seguinte: IMC = peso/(altura * altura).*/

#include <stdio.h>

main() {
    float altura, peso, imc;

    printf("Digite os valores a seguir para que seja calculado o IMC.\n");

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Peso: ");
    scanf("%f", &peso);

    imc = (peso/(pow(altura, 2)));
    printf("O seu IMC e %f.2f", imc);
}
