// Indique a quantidade de hora de aula por mes e valor da hora/aula

#include <stdio.h>

main()
{
    int horas;
    float valor, valor_final, desconto;

    printf("- Desconto do INSS -");
    printf("\nIndique quantas horas de aula foram dadas no mes: ");
    scanf("%d", &horas);
    printf("Indique qual o valor da hora/aula: R$");
    scanf("%f", &valor);

    valor_final = horas*valor;
    printf("O valor sem desconto foi %.2f. O valor do desconto foi de ", valor_final);

    if (valor_final < 2000){
        printf("5 por cento.");
        printf("\nVoce recebera %.2f", valor_final-(valor_final*5/100));
    }
    else {
        printf("10 por cento.");
        printf("\nVoce recebera %.2f", valor_final-(valor_final*10/100));
    }
}
