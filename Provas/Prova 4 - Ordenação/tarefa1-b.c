/*Para evitar fraudes, uma máquina de preenchimento de cheques
deve preencher as dezenas não utilizadas no valor numérico com asteriscos.
Considerando que na loja X não são aceitos cheques de valores maiores que
R$ 10.000,00, faça um programa que imprimia na tela o valor numérico do
cheque e seu valor por extenso.*/

#include <stdio.h>
#include <string.h>

main()
{   
    int valor;
    char opc, vallen[4];
    printf("[     ChequeX     ]");
    printf("\n===================");
    printf("\nEntre com o valor (inteiro) do cheque que deseja fazer: R$ ");
    while(1) {


        scanf("%d", &valor);
        if(valor < 10 || valor > 10000) {
            printf("\nValor nao esta dentro dos limites de R$10 a R$10.000.");
            printf("\nTente novamente: R$ ");
        }
        else {
            printf("Deseja confirmar um cheque de R$ ");
            if(valor > 999 && valor < 10000) {
                strcpy(vallen, "*");
                printf("%d%s? ", valor, vallen);
            }
            else if (valor > 99 && valor < 1000) {
                strcpy(vallen, "**");
                printf("%d%s? ", valor, vallen);
            }
            else {
                strcpy(vallen, "***");
                printf("%d%s? ", valor, vallen);
            }
            printf("(s/n) ");
            scanf(" %c", &opc);
            if(opc == 's') {
                break;
            }
            else {
                printf("Digite ouro valor: R$ ");
            }
        }
    }
    printf("\n===================");
    printf("\nCheque de R$%d%s confirmado", valor, vallen);
    printf("\nValor numero: R$%d", valor);

}