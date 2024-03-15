#include <stdio.h>

main ()
{
    float mesada, valor;
    int opc;

    printf ("Entre com o valor de sua mesada: R$");
    scanf ("%f", &mesada);

    printf("\nVoce deseja comprar algum produto?");
    printf("\n[ 1 ] Sim");
    printf("\n[ 2 ] Nao");
    scanf("%d", &opc);

    switch (opc) {
    case 1:
        printf("\nEntre com o valor do produto: R$");
        scanf("%f", &valor);
        printf("\nO seu novo saldo e: R$%.2f", mesada-valor);
        break;
    case 2:
        printf("\nO valor da sua mesada eh: R$%.2f", mesada);
        break;
    default:
        printf("\nOpcao invalida!");
    }
}
// Decidimos utilizar o switch...case para ser mais prático de realizar o codigo e deixa-lo mais legível.
