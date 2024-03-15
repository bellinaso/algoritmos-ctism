#include <stdio.h>

main()
{
    int l, c, aux, vetor[10];

    for(l=0; l<10; l++) {
        for(c=l+1; c<10; c++) {
            if(vetor[l] > vetor[c]) {
                aux = vetor[l];
                vetor[l] = vetor[c];
                vetor[c] = aux;
            }
        }
    }
}