/*Desenvolva um programa que leia as 10 notas de um aluno e ao final mostre a
primeira e a última nota.*/

#include <stdio.h>

main()
{
    int v[10], i;

    for(i=0;i<10;i++) {
        printf("Entre com a nota %d/10: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("\nA 1a nota e: %d", v[0]);
    printf("\nA ultima nota e: %d", v[9]);
}
