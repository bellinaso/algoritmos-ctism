#include <stdio.h>
#include <string.h>

int main()
{
    char palavras [5][20], concatenado[100];

    printf("\nInsira 5 palavras");
    for(int i=0; i<5; i++) {
        printf("\nPalavra %d: ", i+1);
        scanf("%s", &palavras[i]);
    }
    for(int i=0; i<5; i++) {
        if (strlen(concatenado) != 0) {
            strcat(concatenado, palavras[i]);
        }
        else {
            strcpy(concatenado, palavras[i]);
        }
    }
    printf("As 5 palavras concatenadas formaram: [ %s ]", concatenado);
}
