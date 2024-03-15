#include <stdio.h>
#include <string.h>


int binario(int num)
{
    int binario = 0, i = 1, aux;
    while (num != 0) {
        aux = num % 2;
        num /= 2;
        binario += aux * i;
        i *= 10;
    }
    return binario;
}


int mapa2(int *saidas)
{
    char expressao[100];

    // Verificar coluna
    for (int i=0; i<3; i++) {
        // Verificando se esta na coluna 0
        if (i%2 == 0) {
            // Se a coluna 0 for igual a coluna 1...
            if (saidas[i] == saidas[i+1] && saidas[i] == 1) {
                // Se for linha 0
                if (i < 2) {
                    // A = forte / B = fraco
                    strcat(expressao, "('a)+");
                }
                // Se for linha 1
                else {
                    // A = fraco / B = forte
                    strcat(expressao, "(a)+");
                }
            }
        }
    }
    // Verificar linha
    for (int i=0; i<2; i++) {
        if (saidas[i] == saidas[i+2] && saidas[i] == 1) {
            // Se for coluna 0
            if (i < 1) {
                // A = fraco / B = forte
                strcat(expressao, "('b)+");
            }
            // Se for coluna 1
            else {
                // A = forte / B = fraco
                strcat(expressao, "(b)+");
            }
        }
    }
    printf("Expressao: %s", expressao);

}


int mapa3(int *saidas)
{
    char expressao[100];
    int aux;

    // Inverte a posição 010 com a 011 por conta da lóogica do mapa
    aux = saidas[2];
    saidas[2] = saidas[3];
    saidas[3] = aux;

    // Inverte a posição 110 com a 111
    aux = saidas[6];
    saidas[6] = saidas[7];
    saidas[7] = aux;

    // Verificar linha
    for (int i=0; i<4; i++) {
        if (saidas[i] == saidas[i+4] && saidas[i] == 1) {
            switch (i)
            {
                // Casos que o A = fraco
                case 0:
                    strcat(expressao, "('B.'C)+");
                    break;
                case 1:
                    strcat(expressao, "('B.C)+");
                    break;
                case 2:
                    strcat(expressao, "(B.C)+");
                    break;
                case 3:
                    strcat(expressao, "(B.'C)+");
                    break;

            }
        }
    }

    // Verificar coluna
    for (int i=0; i<8; i++) {
        // Verifica as colunas da primeira linha
        if (i<3) {
            if (saidas[i] == saidas[i+1] && saidas[i] == 1) {
                switch(i)
                {
                    case 0:
                        strcat(expressao, "('A.'B)+");
                        break;
                    case 1:
                        strcat(expressao, "('A.C)+");
                        break;
                    case 2:
                        strcat(expressao, "('A.B)+");
                        break;
                }
            }
        }
        // Verifica o lado direito com lado esquerdo da primeira linha
        else if (i == 3) {
            if (saidas[i] == saidas[i-3] && saidas[i] == 1) {
                strcat(expressao, "('A.'C)+");
            }
        }
        // Verifica o lado direito com o esquerdo da segunda linha
        else if (i == 7) {
            if (saidas[i] == saidas[i-3] && saidas[i] == 1) {
                strcat(expressao, "(A.'C)+");
            }
        }
        // Verifica as colunas da segunda linha
        else {
            if (saidas[i] == saidas[i+1] && saidas[i] == 1) {
                switch(i)
                {
                    case 4:
                        strcat(expressao, "(A.'B)+");
                        break;
                    case 5:
                        strcat(expressao, "(A.C)+");
                        break;
                    case 6:
                        strcat(expressao, "(A.B)+");
                        break;
                }
            }
        }
    }
    printf("Expressao: %s", expressao);

}


int main()
{
    int opc=1;
    int mapa[16];


    while(opc!=0)
    {
        printf("\nEntre com a quantidade de variaveis:");
        printf("\n[ 2 ] 2 variaveis \n[ 3 ] 3 variaveis \n[ 4 ] 4 variaveis \n[ 0 ] Sair");
        printf("\nSua opcao: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 0:
            break;

        case 2:
            for(int i=0; i<4; i++)
            {
                printf("Entre com a saida da entrada [ %02d ]",binario(i));
                scanf("%d", &mapa[i]);
                if(mapa[i] != 0 && mapa[i] != 1)
                {
                    printf("Valor invalido :/ Tente 0 ou 1.\n\n");
                    i = i-1;
                }
            }
            mapa2(mapa);
            break;

        case 3:
            for(int i=0; i<8; i++)
            {
                printf("Entre com a saida da entrada [ %03d ]",binario(i));
                scanf("%d", &mapa[i]);
                if(mapa[i] != 0 && mapa[i] != 1)
                {
                    printf("Valor invalido :/ Tente 0 ou 1.\n\n");
                    i = i-1;
                }
            }
            mapa3(mapa);
            break;

        case 4:
            printf("Função indisponível no momento :/");
            break;

        default:
            printf("Opcao invalida :/ Tente novamente");
            break;
        }
    }
}
