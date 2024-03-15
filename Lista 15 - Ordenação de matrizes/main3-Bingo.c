/*Implemente um programa que simule o jogo do Bingo. Deve gerar sucessivamente números aleatórios
compreendidos entre 1 e 90 até que o utilizador digite a palavra BINGO. Para facilitar a verificação do
cartão premiado, após o sorteio de um novo número deve apresentar a lista ordenada de todos os números
já sorteados.
Sugestão: para melhorar a eficiência do seu programa, tire partido do fato de que quando um novo número
é sorteado a lista dos anteriores já se encontra ordenada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

main()
{
    int temp=1, aux;
    char string[6];


    while(temp != 0) {

        int i, l, c, bingoNum[90], randomNum=0, randomizedNum=0, equalNum=0;
        char opc;


        // Header bonito
        for(i=0; i<35; i++) {
            printf("=");
        }
        printf("\nBingo Online que a PF nao permite\n");
        for(i=0; i<35; i++) {
            printf("=");
        }
        printf("\n\n[  ] Caso voce ganhe, digite BINGO.");
        printf("\n[  ] Deseja comecar? (s/n): ");

        scanf(" %c", &opc);
        
        switch(opc)
        {
            // Começa o bingo
            case 's':
                srand(time(NULL));

                printf("\nSorteando um numero...");
                for(i=0; i<90; i++) {
                    
                    // Randomiza um numero, contabiliza ele e indica que não há repetidos
                    randomNum = 1 + rand()%90;
                    randomizedNum++;
                    equalNum=0;

                    for(c=0; c<randomizedNum; c++) {
                        // Verifica em todos os números se o sorteado já existe
                        if(randomNum == bingoNum[c]) {
                            // Se houver repetido será sorteado mais um
                            i-=1;
                            randomizedNum-=1;
                            equalNum=TRUE;
                            break;
                        }
                    }
                    // Se não houver repetido ele adiciona a lista
                    if(equalNum==FALSE) {
                        bingoNum[i] = randomNum;

                        // Mostra o numero sorteado e pergunta se o jogador ganhou
                        printf("\n\nNumeros sorteados: %d", i);
                        printf("\nO numero sorteado foi: %d", bingoNum[i]);
                        printf("\nEu ouvi um BINGO? (BINGO/n)");
                        scanf("%s", &string);
                    }

                    // Se for bingo acaba o jogo
                    if (strcmp(strlwr(string), "bingo") == 0) {
                        printf("\n\nParece que temos um vencedor!!!");
                        printf("\nNumeros sorteados:\n");

                        break;
                    }
                }
                // Se todos os numeros forem sorteados o jogo acaba
                if(i==90) {
                    printf("Todos os numeros foram sorteados :(. O jogo foi encerrado\n");
                }
                // Ordena os numeros sorteados
                for(l=0; l<randomizedNum; l++) {
                    for(c=l+1; c<randomizedNum; c++) {

                        if(bingoNum[l] > bingoNum[c]) {
                            aux = bingoNum[l];
                            bingoNum[l] = bingoNum[c];
                            bingoNum[c] = aux;
                        }
                    }
                    printf("* %d\n", bingoNum[l]);
                }
                break;

            // Sai do jogo
            case 'n':
                printf("Saindo...");
                temp = 0;
                break;

            default:
                printf("\nAlgo deu errado! Tente novamente: \n");
                break;
        }
        
    };
    
}