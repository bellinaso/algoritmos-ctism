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
// A diferença entre utilizar o If...else e o switch...case é a praticidade e leitura.
// Nesse caso não havia a possibilidade de comparar numeros, então a única opção era definir para o usuário apenas digitar números positivos.

