
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{
    char string[85];

    printf("\nDigite uma string de ate 85 letras: ");
    gets(string);
    puts(string);

    puts("\n");
    printf("Pressione qualquer tecla para continuar");
    getch();
}
