/*
Criar um algoritmo que implemente o seguinte menu de opções:  
- Ler notas e nomes de 100 candidatos; 
- Exibir média geral de todos os candidatos; 
- Exibir uma lista com o nome e a nota de todos os candidatos em ordem decrescente de nota; 
- Ler  um  nome  e  buscar  esse  candidato  imprimindo  o  nome  e  sua  nota;  caso  não  seja  encontrado 
candidato com o nome lido, imprimir a mensagem “candidato não encontrado”
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#define CANDDTS 10

main()
{   
    srand(time(NULL));

    int i, l, c;
    float notas[CANDDTS], media=0, aux;
    char candidatos[CANDDTS][20], auxName[20];
    bool buff=false;

    printf("Sistema de notas\n");
    for(i=0; i<35; i++) {
        printf("=");
    }
    printf("\n[Sera sorteado notas para todos os %d concorrentes]\n", CANDDTS);

    printf("Digite o nome dos concorrentes: (Ate 20 caracteres)");
    for(i=0; i<CANDDTS; i++) {

        printf("\n\nCandidato %d: ", i+1);
        scanf("%s", candidatos[i]);

        notas[i] = (float)(rand()%100)/10;
        media+=notas[i];
        printf("Nota: %.2f", notas[i]);
    }

    printf("\n\n");
    for(i=0; i<35; i++) {
        printf("=");
    }
    printf("\nRanking de notas\n");
    for(i=0; i<35; i++) {
        printf("=");
    }

    printf("\nMedia geral: %.2f\n", media/CANDDTS);

    for(l=CANDDTS-1; l>-1; l-=1) {
        for(c=l-1; c>-1; c-=1) {
            if(notas[l] < notas[c]) {
                aux = notas[l];
                strcpy(auxName, candidatos[l]);

                notas[l] = notas[c];
                strcpy(candidatos[l], candidatos[c]);

                notas[c] = aux;
                strcpy(candidatos[c], auxName);
            }
        }
        printf("\n\nCandidato n%d: %s", l+1, candidatos[l]);
        printf("\nNota: %.2f", notas[l]);
    }

    while(1) {
        printf("\nPesquisa de nome: (q para sair) ");
        scanf("%s", &auxName);

        if(strcmp(auxName, "q") == 0) {
            break;
        }
        else {
            for(i=0; i<CANDDTS; i++) {
                if(strcmp(strlwr(auxName), strlwr(candidatos[i])) == 0) {
                    printf("Candidato: %s | ", candidatos[i]);
                    printf("%.2f pontos", notas[i]);
                    buff = true;
                }
            }
            if(!buff) {
                printf("\n\nUsuario nao encontrado!!");
            }
        }
    }
}