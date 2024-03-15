/*Realize a soma de dois elementos. Faça isso através de uma função, a qual será chamada
na função principal.*/

#include <stdio.h>

int soma(int a, int b)
{
    return a+b;
}

main()
{
    int soma_num;

    soma_num = soma(1, 2);

    printf("A soma dos numeros eh: %d", soma_num);
}