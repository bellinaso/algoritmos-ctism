/*- Faça um programa que contenha um menu com as seguintes opções:
(a) Ler uma string S1 (tamanho maximo 20 caracteres);
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da
comparação;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacão;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser
informado pelo usuario;
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres
C1 e C2 serão lidos pelo usuário;*/

#include <stdio.h>
#include <string.h>

int main() {
    char S1[21]; // Tamanho máximo da string é 20 + 1 (para o caractere nulo)
    char S2[21];
    char C1, C2, opcao;
    
    do {
        printf("\nMenu:\n");
        printf("[ A ] Ler string S1\n");
        printf("[ B ] Imprimir tamanho da string S1\n");
        printf("[ C ] Comparar strings S1 e S2\n");
        printf("[ D ] Concatenar strings S1 e S2\n");
        printf("[ E ] Imprimir string S1 reversa\n");
        printf("[ F ] Contar ocorrências de um caractere em S1\n");
        printf("[ G ] Substituir caractere em S1\n");
        printf("[ 0 ] Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);
        
        switch(opcao) {
            case 'a':
                printf("Digite a string S1: ");
                scanf("%s", S1);
                break;
                
            case 'b':
                printf("Tamanho da string S1: %lu\n", strlen(S1));
                break;
                
            case 'c':
                printf("Digite a string S2: ");
                scanf("%s", S2);
                if (strcmp(S1, S2) == 0) {
                    printf("As strings sao iguais.\n");
                } else {
                    printf("As strings sao diferentes.\n");
                }
                break;
                
            case 'd':
                printf("Digite a string S2: ");
                scanf("%s", S2);
                strcat(S1, S2);
                printf("Resultado da concatenacao: %s\n", S1);
                break;
                
            case 'e':
                printf("String S1 reversa: ");
                for (int i = strlen(S1) - 1; i >= 0; i--) {
                    printf("%c", S1[i]);
                }
                printf("\n");
                break;
                
            case 'f':
                printf("Digite o caractere a ser contado: ");
                scanf(" %c", &C1);
                int count = 0;
                for (int i = 0; i < strlen(S1); i++) {
                    if (S1[i] == C1) {
                        count++;
                    }
                }
                printf("O caractere '%c' aparece %d vezes em S1.\n", C1, count);
                break;
                
            case 'g':
                printf("Digite o caractere a ser substituido: ");
                scanf(" %c", &C1);
                printf("Digite o novo caractere: ");
                scanf(" %c", &C2);
                for (int i = 0; i < strlen(S1); i++) {
                    if (S1[i] == C1) {
                        S1[i] = C2;
                        break; // Substitui apenas a primeira ocorrência
                    }
                }
                printf("String S1 apos substituicao: %s\n", S1);
                break;
                
            case '0':
                printf("Saindo...\n");
                break;
                
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);
    
    return 0;
}