/*02. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o
preço novo, e escreva uma mensagem em função do preço novo (de acordo com a 2ª tabela).*/

#include <stdio.h>

main()
{
    float valor;

    printf("-- Aumento de precos --\n");
    printf("Indique o valor do produto: ");
    scanf("%f", &valor);

    if (valor <= 50) {
        valor += (valor*5/100);
    }
    else if (valor <= 100) {
        valor += (valor*10/100);
    }
    else {
        valor += (valor*15/100);
    }

    printf("O novo valor do produto e: R$%.2f", valor);
    printf("\nO preco esta: ");

    if (valor <= 80) {
        printf("Barato dimaissss");
    }
    else if (valor <= 120) {
        printf("Normal");
    }
    else if (valor <= 200) {
        printf("Caro");
    }
    else {
        printf("Caro dimaisssss");
    }
}
