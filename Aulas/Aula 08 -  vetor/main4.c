/*� Crie um programa que leia um vetor de 10 n�meros reais, e mostre os n�meros
contidos nos �ndices pares.*/

#include <stdio.h>

main()
{
    float v[10];
    int i;

    for(i=0;i<10;i++) {
        printf("Entre com o %do numero: ", i);
        scanf("%f", &v[i]);
    }
    for(i=0;i<10;i++) {
        if(i%2==0) {
            printf("\n%f", v[i]);
        }
    }
}
