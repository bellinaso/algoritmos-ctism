/*Escreva em C a função CONTA. A função recebe uma string (nome) e devolve via
parâmetros: número letras maiúsculas e o número letras minúsculas. A função retorna
o total de letras do nome. */

#include <stdio.h>
#include <string.h>

int contName(char *nome)
{
    int letrasG = 0, letrasP = 0;

    for (int i = 0; i < strlen(nome); i++)
    {
        if (nome[i] >= 65 && nome[i] <= 90)
        {
            letrasG++;
        }
        else if (nome[i] >= 97 && nome[i] <= 122)
        {
            letrasP++;
        }
    }
    printf("\nO nome %s possui %d letras maiusculas e %d minusculas.", nome, letrasG, letrasP);
    return strlen(nome);
}

int main(void)
{
    char nome[15];
    int nomeLen=0;

    printf("\nEntre com um nome: ");
    scanf("%s", &nome);

    nomeLen = contName(nome);
    printf("\n%d letras", nomeLen);
}