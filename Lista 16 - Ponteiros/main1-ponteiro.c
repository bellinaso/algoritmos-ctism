/*Construa um programa inicializando uma variável qualquer mostrando ao final seu
resultado através de um ponteiro que aponta para outro ponteiro.*/

#include <stdio.h>

main()
{
    int x = 10, *p;

    p = &x;

    printf("Valor *p: %d \nEndereco &p: %d", *p, &p);
}