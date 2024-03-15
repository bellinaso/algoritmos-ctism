/*05) Faça um programa que leia um ano e informe quem é o campeão mundial no final do ano e o local em
que a competição ocorreu.
Local – Ano - Campeão
Espanha - 1982 Itália
México - 1986 Argentina
Itália - 1990 Alemanha
EUA - 1994 Brasil
França - 1998 França
Coréia e Japão – 2002 Brasil
Alemanha - 2006 - Itália
África do Sul - 2010 - Espanha
Brasil - 2014 - Alemanha*/

#include <stdio.h>

int main()
{
    int ano;

    printf("-- Vencedores da copa --");
    printf("\nInsira um ano entre 1982 e 2014: ");
    scanf("%d", &ano);

    switch(ano)
    {
    case 1982:
        printf("[ Local ] Espanha");
        printf("\n[ Campeao ] Italia");
        break;
    case 1986:
        printf("\n[ Local ] Mexico");
        printf("\n[ Campeao ] Argentina");
        break;
    case 1990:
        printf("\n[ Local ] Italia");
        printf("\n[ Campeao ] Alemanha");
        break;
    case 1994:
        printf("\n[ Local ] EUA");
        printf("\n[ Campeao ] Brasil");
        break;
    case 1998:
        printf("\n[ Local ] França");
        printf("\n[ Campeao ] França");
        break;
    case 2002:
        printf("\n[ Local ] Coreia e Japao");
        printf("\n[ Campeao ] Brasil");
        break;
    case 2006:
        printf("\n[ Local ] Alemanha");
        printf("\n[ Campeao ] Italia");
        break;
    case 2010:
        printf("\n[ Local ] Africa do sul");
        printf("\n[ Campeao ] Espanha");
        break;
    case 2014:
        printf("\n[ Local ] Brasil");
        printf("\n[ Campeao ] Alemanha");
        break;
    default:
        printf("\nAno nao encontrado!");
    
    }

}