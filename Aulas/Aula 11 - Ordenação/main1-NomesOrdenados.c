#include <stdio.h>
#include <string.h>

main()
{
    int l, c;
    char nomes[5][20], aux[20];

    for(l=0; l<5; l++) {
        printf("Entre com o nome %d: ", l);
        gets(nomes[l]);
    }

    for(l=0; l<5; l++) {

        for(c=l+1; c<5; c++) {
            if(strcmp(nomes[l], nomes[c]) > 0) {
                strcpy(aux, nomes[l]);
                strcpy(nomes[l], nomes[c]);
                strcpy(nomes[c], aux);
            }
        }
    }
    printf("Nomes ordenados:\n");
    for(l=0; l<5; l++) {
        puts(nomes[l]);
    }
}