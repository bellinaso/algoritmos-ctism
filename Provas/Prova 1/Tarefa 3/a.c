#include<stdio.h>
#include<math.h>
main()
{
    int x, y;
    printf("Indique um numero positivo ou 0: ");
    scanf("%d", &x);

    switch (x) {
    case 0:
        y = x;
        printf("Y = %d", y);
        break;

    case 1:
        y = 0;
        printf("Y = %d", y);
        break;

    default:
        y = pow(x,2);
        printf("Y = %d", y);
    }
}
// A diferen�a entre utilizar o If...else e o switch...case � a praticidade e leitura.
// Nesse caso n�o havia a possibilidade de comparar numeros, ent�o a �nica op��o era definir para o usu�rio apenas digitar n�meros positivos.

