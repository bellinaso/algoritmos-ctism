/*Entrar com a sigla do estado de uma pessoa e imprimir uma das mensagens:
 Carioca
 Paulista
 Mineiro
 Outros estados
*/

#include <stdio.h>

main() {
    int opcao;

    printf("Escolha abaixo o estado: \n [1] Rio de janeiro \n [2] Sao Paulo \n [3] Minas Gerais \n [4] Outro estado \n Utilize numeros: ");
    scanf("%d", &opcao);

    if (opcao <= 3) {
        printf("O estado escolhido foi: ");

        if (opcao == 1) {
            printf("Rio de Janeiro");
        }
        else if (opcao == 2) {
            printf("Sao Paulo");
        }
        else if (opcao == 3) {
            printf("Minas Gerais");
        }
    }
    else {
        printf("Nao foi selecionado nenhum estado das opcoes");
    }
}
