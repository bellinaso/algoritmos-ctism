/*Faça um programa que leia quatro palavras pelo teclado, e
armazene cada palavra em uma string. Depois, concatene todas as strings
lidas numa única string. Por fim apresente esta como resultado ao final do
programa.*/

#include <stdio.h>
#include <string.h> 

main()
{
    char palavra1[10], palavra2[10], palavra3[10], palavra4[10], frase[40];

    printf("Entre com 4 palavras de ate 10 letras:");
    printf("\nPalavra 1: ");
    scanf("%s", &palavra1);
    
    printf("\nPalavra 2: ");
    scanf("%s", &palavra2);

    printf("\nPalavra 3: ");
    scanf("%s", &palavra3);
    
    printf("\nPalavra 4: ");
    scanf("%s", &palavra4);

    strcat(frase, palavra1);
    strcat(frase, palavra2);
    strcat(frase, palavra3);
    strcat(frase, palavra4);
    printf("A frase formada foi: %s", frase);
}