/*O cardápio de uma casa de lanches, especializada em sanduíches, é exemplificado a
seguir. Escreva um algoritmo que leia o código e a quantidade de cada item comprado por
um freguês calcule e exiba o total a pagar. (Obs.: A leitura de código “X” indica o fim dos
itens).*/

#include <stdio.h>
#include <string.h>

int main() {
    char codigo;
    int quantidade, i;
    float total=0;

    printf("Cardapio Lancheria lanches:\n");
    for (i=0; i<50; i++) {
        printf("=");
    }
    printf("H - Hamburguer - R$5,00\n");
    printf("C - Cheeseburguer - R$6,00\n");
    printf("M - Misto-quente - R$4,00\n");
    printf("A - Americano - R$8,00\n");
    printf("Q - Queijo-prato - R$7,00\n");
    printf ("\n");

    while (1) {
        printf("Entre com o codigo do produto (ou digite X para fechar): ");
        scanf(" %c", &codigo);
        strlwr(codigo);

        if (codigo == 'x') {
            break;
        }

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);

        switch (codigo) {
            case 'h':
                total += quantidade * 5.00;
                break;
            case 'c':
                total += quantidade * 6.00;
                break;
            case 'm':
                total += quantidade * 4.00;
                break;
            case 'a':
                total += quantidade * 8.00;
                break;
            case 'q':
                total += quantidade * 7.00;
                break;
            default:
                printf("\nCodigo invalido.\n");
        }
    }

    printf("\nO total a pagar: R$%.2f\n", total);
}
