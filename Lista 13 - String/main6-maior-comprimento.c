/*Faça um programa que dado 2 palavras, determine:
a. Se as palavras são iguais;
b. Caso as palavras sejam diferentes, qual delas tem maior comprimento (não esquecer
a possibilidade de existirem palavras diferentes de mesmo tamanho);*/

#include <stdio.h>
#include <string.h>

main()
{
    char palavra1[20], palavra2[20];
    int i;

    printf("Entre com uma palavra: ");
    gets(palavra1);

    printf("Entre com outra palavra: ");
    gets(palavra2);


    if (palavra1 == palavra2) {
        printf("As palavras sao iguais");
    }
    else if (strlen(palavra1) > strlen(palavra2)) {
        printf("As palavras sao diferentes e a primeira eh maior");
    }
    else {
        printf("As palavras sao diferentes e a segunda eh maior");
    }
}