
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{
    char string[20], caractere[2];

    printf("\nSubstituindo os caracteres da string\n");
    printf("--------------------\n");

    printf("Digite a string: ");
    scanf("%s", &string);

    printf("Digite o caractere: ");
    scanf("%s", &caractere);

    printf("Substituindo -> %s", strset(string, caractere[0]));
}

