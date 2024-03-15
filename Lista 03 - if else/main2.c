// 9% de desconto

#include <stdio.h>

main()
{
    float value;

    printf("Digite o valor do produto: ");
    scanf("%f", &value);

    printf("O produto recebeu 9 por cento de desconto e o novo valor e de: %.2f", (value-(value*9/100)));
}
