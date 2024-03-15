/*Escrever um algoritmo para ler cinco valores inteiros, calcular a sua média, e escrever na tela
os números que são superiores à média.*/

#include <stdio.h>

main()
{
    int i, num[5];
    float media=0;

    for (i=0;i<5;i++) {
        printf("Digite o numero %d/4: ", i);
        scanf("%d", &num[i]);
    }
    for (i=0;i<5;i++) {
        media += num[i];
    }
    media = media/5;

    printf("A media dos numeros digitados eh: %.2f", media);
    printf("\nOs numeros maiores que a media sao: ");
    for (i=0;i<5;i++) {
        if (num[i] > media) {
            printf("%d, ", num[i]);
        }
    }
}
