#include <stdio.h>

int main()
{
    char pass_w;

    printf("-- Porta inteligente --");
    printf("\nDigite a senha de acesso: ");

    while (1) {
        scanf(" %c", &pass_w);

        if (pass_w != 'a') {
            printf("Senha invalida! Tente novamente: ");
        }
        else {
            break;
        }
    }
    printf("-- A porta foi aberta --");
    
    return 0;
}