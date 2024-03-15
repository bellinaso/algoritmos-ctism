// salario +15% -8% de imposto, exibir o salario inicial, com aumento e final

#include <stdio.h>

int main()
{
    float salario, salario_aumento, salario_final;

    printf("Indique o seu salario: R$");
    scanf("%f", &salario);

    printf("Voce recebera 15 por cento de aumento! Porem 8 por cento serao descontados por conta de impostos :(");
    printf("\nSeu salario atual e de: R$%.2f", salario);

    salario_aumento = salario+(salario*15/100);
    salario_final = salario_aumento-(salario_aumento*8/100);

    printf("\nSeu novo salario com aumento sera: R$%.2f", salario_aumento);
    printf("\nSeu salario final sera: R$%.2f", salario_final);

    return 0;
}
