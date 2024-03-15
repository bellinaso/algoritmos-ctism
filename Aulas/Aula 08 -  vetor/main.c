/*Desenvolva um programa que leia a nota de 10 alunos e depois as imprima
para o usuário.*/

#include <stdio.h>

main()
{
    int v[10], i;

    for(i=0;i<10;i++) {
        printf("Entre com a nota %d/10: ", i+1);
        scanf("%d", &v[i]);
    }
    for(i=0;i<10;i++) {
       printf("\nO valor %d do vetor e: %d", i+1, v[i]);1
    }
}
