/*Escreva um programa que calcule as seguintes operacoes entre dois numeros dados:
Adicao, Diferenca, Multiplicacao, Divisao, Exponeciacao e Media.*/

#include <stdio.h>
#include <math.h>

void calculos(float *a, float *b)
{
    printf("\nSoma: %.0f", (*a+*b));
    printf("\nDiferenca: %.0f", (*a-*b));
    printf("\nMultiplicacao: %.0f", ((*a)*(*b)));
    printf("\nDivisao: %.2f", ((*a)/(*b)));
    printf("\nElevado: %.2f", (pow(*a, *b)));
    printf("\nMedia: %.2f", ((*a+*b)/2));
}

void main()
{
    float a, b;

    printf("Entre com o primeiro numero: ");
    scanf("%f", &a);

    printf("Entre com o segundo numero: ");
    scanf("%f", &b);

    calculos(&a, &b);
}