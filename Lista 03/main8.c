// Par ou impar

#include <stdio.h>

main()
{
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("O valor %d ", num);

    if (num%2==0) {
        printf("e par");
    }
    else {
        printf("e impar");
    }
}
