#include <stdio.h>

main ()
{
    int opc, matricula=0;
    float salario;

    printf ("Indique sua matricula: ");
    scanf ("%d", &matricula);

    printf ("\nIndique seu salario: R$");
    scanf ("%f", &salario);

    printf ("\n-- Indique o nivel de abdono --");
    printf ("\n[ 1 ] Excelente");
    printf ("\n[ 2 ] Bom");
    printf ("\n[ 3 ] Regular");
    scanf ("%d", &opc);

    printf("O funcionario com matricula %d ", matricula);
    switch (opc){

    case 1:
        printf ("recebeu 80%% de aumento");
        printf ("Novo salario: R$%.2f", salario + (salario*80/100));
        break;

    case 2:
        printf ("recebeu 50%% de aumento");
        printf ("Novo salario: R$%.2f", salario + (salario*50/100));
        break;

    case 3:
        printf ("recebeu 30%% de aumento");
        printf ("\nNovo salario: R$%.2f", salario + (salario*30/100));
        break;

    default:
        printf("\nOpcao invalida!");
    }

}
// Neste caso decidimos utilizar o switch...case para ser mais fácil para o código ser lido e prático.
