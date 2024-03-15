#include <stdio.h>

main()
{
    char nome;
    int idade;

    printf("Indique a inicial do seui nome: ");
    scanf("%c", &nome);

    printf("Indiqe a sua idade: ");
    scanf("%d", &idade);

    printf("Ola [%c], voce tem %d anos e seu plano de saude custara: ", nome, idade);

    if (idade <= 10){
        printf("R$ 30,00");
    }
    else if (idade > 10 && idade <= 29) {
        printf("R$ 60,00");
    }
    else if (idade > 29 && idade <= 45) {
        printf("R$ 120,00");
    }
    else if (idade > 45 && idade <= 59) {
        printf("R$ 15,00");
    }
    else if (idade > 59 && idade <= 65) {
        printf("R$ 250,00");
    }
    else if (idade > 65) {
        printf("R$ 400,00");
    }
}
