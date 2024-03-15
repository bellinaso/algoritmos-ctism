/*Fazer um programa para calcular e escrever a soma dos números
pares desde 100 até 200, inclusive.*/

#include <stdio.h>

int main()
{
    int cont, soma;

    cont = 100;
    soma = 100;
    do {
        cont += 2;
        soma += cont;
    } while (cont <= 200);
    printf("A soma dos numeros de pares de 100 a 200 e igual a: %d", soma);

    return 0;
}
