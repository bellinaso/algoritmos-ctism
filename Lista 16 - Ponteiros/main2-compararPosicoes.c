/*Faça um programa que seja capaz de comparar o endereço de dois ponteiros. Caso
o primeiro endereço seja maior que o segundo imprima o resultado da subtração do
primeiro endereço menos o segundo. Caso contrário imprima a subtração realizada
entre o segundo endereço menos o primeiro.*/

#include <stdio.h>

main()
{
    int x1=12, x2=24;

    int *p1=&x1, *p2=&x2;

    if(p1 > p2) {
        printf("p1: %d > p2: %d", &p1, &p2);
    }
    else {
        printf("p1: %d < p2: %d", &p1, &p2);
    }
}