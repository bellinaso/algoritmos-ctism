
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{
    char str1[100], str2[100];

    printf("\nEntre com uma string: ");
    gets(str1);

    printf("\nEntre com outra string: ");
    gets(str2);

    if (strcmp(str1, str2) == 0) {
        printf("As duas strings sao iguais");
    }
    else {
        printf("As strings sao diferentes");
    }
}
