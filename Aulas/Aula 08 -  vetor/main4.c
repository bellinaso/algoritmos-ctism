/*• Crie um programa que leia um vetor de 10 números reais, e mostre os números
contidos nos índices pares.*/

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
