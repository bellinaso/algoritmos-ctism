
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{
    int i;
    char nome[7];

    printf("Insira um nome ate 7 letras: ");
    scanf("%s", &nome);

    for (i=0; i<7; i++) {
        printf("%c", nome[6-i]);
    }
    getch();
}
