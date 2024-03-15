#include <stdio.h>
#include <string.h>

int main()
{
    struct pessoas {
        char nome[30];
        char endereco[50];
    } pessoa[15];

    int opc;
    char string[50];

    printf("\nCadastro de endereco");
    printf("\n====================");
    do {
        printf("\n\nEscolha uma opcao: \n[ 1 ] Cadastrar pessoa \n[ 2 ] Mostrar dados \n[ 3 ] Sair");
        printf("\nEscolha: ");
        scanf("%d", &opc);
        switch(opc)
        {
        case 1:
            for(int i=0; i<15; i++) {
                if(strlen(pessoa[i].nome) != 0) {
                    printf("Entre com o primeiro nome: ");
                    scanf("%s", pessoa[i].nome);
                    printf("Entre com o endereco: ");
                    scanf("%s", pessoa[i].endereco);
                    break;
                }
                if(i==15) {
                    printf("ERRO! O sistema esta cheio.");
                }
            }
            break;
        case 2:
            printf("\n\nTodos cadastros:");
            for(int i=0; i<15; i++) {
                if(strlen(pessoa[i].nome) != 0) {
                    printf("\n%d | Nome: %s | Endereco: %s", i+1, pessoa[i].nome, pessoa[i].endereco);
                }
            }
            break;
        case 3:
            printf("\nSaindo...");
            break;
        default:
            printf("\nOpcao invalida! Tente novamente.\n");
            break;
        }
    } while(opc != 3);
}
