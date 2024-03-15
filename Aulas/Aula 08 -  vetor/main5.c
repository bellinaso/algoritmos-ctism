/*• Fazer um programa que leia um vetor A contendo 10 números inteiros, calcule e
exiba:
• O maior elemento
• A posição (índice) do maior elemento
*/

#include <stdio.h>

main()
{
    int i, maior=0, i_maior, A[10];

    for(i=0;i<10;i++) {
        printf("Entre com o numero %d/9: ", i);
        scanf("%d", &A[i]);
    }
    for(i=0;i<10;i++) {
        if (A[i]>maior) {
            maior=A[i];
            i_maior=i;
        }
    }
    printf("\nO maior elemento do vetor e: %d", maior);
    printf("\nEle se encontra na posicao: %d", i_maior);
}
