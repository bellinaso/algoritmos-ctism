/*Desenvolver um programa que efetue a leitura de 5 elementos de um vetor A. No final,
apresente o total da soma de todos os elementos que sejam �mpares. Perceba que deve
ser verificado o conte�do do vetor e n�o o �ndice.
*/

#include <stdio.h>

main()
{
    int i, soma=0, elements[5];

    for (i=0;i<5;i++) {
        printf("Digite o %do inteiro: ", i);
        scanf("%d", &elements[i]);

        if (elements[i]%2!=0) {
            soma += elements[i];
        }
    }
    printf("A soma dos elementos impares e: %d", soma);
}
