/*Construir um fluxograma que leia dois valores num�ricos inteiros e efetue a adi��o; caso o resultado seja maior
que 10, apresent�-lo.*/

#include <stdio.h>

main()
{
    int N1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N1);
    printf("O numero escolhido foi %d e ", N1);

    if (N1>10){
        printf("e maior que 10");
    }
    else {
        printf("e menor que 10");
    }
}
