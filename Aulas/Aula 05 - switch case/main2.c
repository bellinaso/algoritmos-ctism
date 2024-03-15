#include <stdio.h>

main()
{
    float num1, num2;
    char operador;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o operador: ");
    operador = getchar();
    scanf("%c", &operador);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    switch(operador)
    {
    case '+':
        printf("%.2f %c %.2f = %.4f", num1, operador, num2, (num1+num2));
        break;

    case '-':
        printf("%.2f %c %.2f = %.4f", num1, operador, num2, (num1-num2));
        break;

    case '*':
        printf("%.2f %c %.2f = %.4f", num1, operador, num2, (num1*num2));
        break;

    case '/':
        printf("%.2f %c %.2f = %.4f", num1, operador, num2, (num1/num2));
        break;

    default:
        printf("Operador invalido!");
    }
}
