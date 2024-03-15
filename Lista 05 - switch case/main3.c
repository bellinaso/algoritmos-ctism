/*03- Implemente uma classe que execute as funcionalidades de uma conta corrente de uma pessoa. Toda a
conta tem um número, uma pessoa vinculada e um saldo. O saldo é atualizado conforme o tipo de
movimentação bancária: depósito ou retirada. Se for um depósito, o dinheiro é creditado ao saldo, se for
retirara, o dinheiro é debitado do saldo. Utilize o comando case para desenvolver esse algoritmo.*/

#include <stdio.h>

int main()
{
    int menu, acc_num;
    char user;
    float saldo, quant;


    // Saldo definido por padrão com 1000 reais pois não usamos o while ainda
    saldo = 1000;

    printf("-- Caixa eletronico --");


    // Usuário entrará com número da conta que tem queq ter 8 dígitos
    printf("\nDigite o numero de 8 digitos da sua conta: ");
    scanf("%d", &acc_num);
    // Testa se o número tem 8 dígitos
    if (acc_num >= 10000000 && acc_num <= 99999999) {

        // Inicial do usuário
        printf("Digite sua inicial: ");
        scanf(" %c", &user);

        // Mostra o saldo do usuário e um menu de opções
        printf("\nOla %c, seu saldo e R$%.2f", user, saldo);
        printf("\nSelecione uma opcao abaixo");
        printf("\n[ 1 ] Deposito \n[ 2 ] Saque");

        printf("\nSua opcao: ");
        scanf("%d", &menu);

        // Se a opção for válida o programa perguntará quanto o usuário deseja da transação
        if (menu >= 1 && menu <= 2){
            printf("Quanto voce deseja ");
        }

        switch (menu)
        {
        case 1:
            printf("depositar? R$");
            scanf("%f", &quant);
            saldo += quant;
            break;

        case 2:
            printf("\nsacar? R$");
            scanf("%f", &quant);
            saldo -= quant;
            break;
        
        default:
            printf("Nenhuma das opcoes encontradas!");
        }

        // Mostra o novo saldo da conta
        printf("Seu novo saldo e de R$%.2f", saldo);

    }
    else {
        printf("Numero da conta invalido!");
    }

    return 0;
}
