/*

    Qual seu time de coração?
1 – fluminense
2 –Botafogo
3- Vasco
4 – Flamengo
5 – Outros
Onde você mora?
1 – RJ;
2 – Niterói
3 – Outros
Qual o seu salário?

Criar um algoritmo que imprima:
 O número de torcedores por clube;
 A média salarial dos torcedores do Botafogo;
 O número de pessoas moradoras do Rio de Janeiro, torcedores de outros clubes;
 O número de pessoas de Niterói torcedoras do Fluminense
O algoritmo acaba quando se digita 0 para o time.
*/

#include <stdio.h>

int main()

{
    float salario=0, salario_medio=0;
    int time, endereco, cont_flum=0, cont_flum_niter=0, cont_botf=0, cont_vasc=0, cont_flam=0, cont_outros=0, cont_ouros_rj=0;

    printf("-- Pesquisa de torcedores --");
    while (time != 0) {
        printf("\nEscolha uma das opcoes abaixo (0 para parar)");

        printf("\n[ 1 ] Fluminense");
        printf("\n[ 2 ] Botafogo");
        printf("\n[ 3 ] Vasco");
        printf("\n[ 4 ] Flamengo");
        printf("\n[ 5 ] Outros");
        printf("\n[ 0 ] Sair");

        printf("\nOpcao: ");
        scanf("%d", &time);

        if (time==0) {
            break;
        }

        printf("\nOnde voce mora? Escolha abaixo");
        printf("\n[ 1 ] Rio de Janeiro");
        printf("\n[ 2 ] Niteroi");
        printf("\n[ 3 ] Outro");
        printf("\n[ 0 ] Sair");

        printf("\nOpcao: ");
        scanf("%d", &endereco);

        printf("\nDigite seu salario: R$");
        scanf("%f", &salario);

        if (endereco==0) {
            break;
        }

        switch (time) {
            case 1: // Fluminense
                cont_flum++;
                if (endereco == 2) {
                    cont_flum_niter++;
                }
                break;

            case 2: // Bota fogo
                cont_botf++;
                salario_medio += salario;
                break;

            case 3: // Vasco
                cont_vasc++;
                break;

            case 4: // Flamengo
                cont_flam++;
                break;

            case 5: // Outros clubes
                cont_outros++;
                if (endereco == 1) {
                    cont_ouros_rj++;
                }
                break;
        }
    }
    printf("\n\n-- Resultado da pesquisa --");
    printf("\nO numero total de torcedores por time e: ");
    printf("\nFluminense: %d", cont_flum);
    printf("\nBotafogo: %d", cont_botf);
    printf("\nVasco: %d", cont_vasc);
    printf("\nOutros times: %d", cont_outros);

    printf("\n\nA media salarial de torcedores do Botafogo e: R$%.2f", salario_medio/cont_botf);

    printf("\n\nA quantidade de torcedores de outros times moradores do Rio de Janeiro e: %d", cont_ouros_rj);

    printf("\n\nA quantidade de torcedores do Fluminense moradores de Niteroi e: %d", cont_flum_niter);

    return 0;
}
