/*Fazer um programa para ler 6 números e depois mostra-los em ordem inversa.*/

#include <stdio.h>

main()
{
    int v[10], i;

    for(i=0;i<6;i++) {
        printf("Entre com numeros %d/6: ", i+1);
        scanf("%d", &v[i]);
    }

    printf("\nOs numeros na ordem inversa sao: ");
    for(i=5;i>=0;i--) {
        printf("\n%d", v[i]);
    }
}
