/*Um teste composto por dez questões foi proposto a um aluno. Cada questão admite as
alternativas identificadas pelas letras A, B, C, D e E. Você deverá solicitar antes de tudo o
gabarito do teste, que deverá ser armazenado em uma matriz string. Solicite as respostas
para cada questão e guarde-as em uma matriz string. Você deverá desenvolver um
algoritmo que seja capaz de escrever a quantidade de acertos que o aluno obteve.*/

#include <stdio.h>
#include <string.h>

main()
{
    char gabarito[4]={'b','c','a','a'}, respostas[4];
    int i, anwser_cont=0;

    printf("Teste de matematica:\n");
    for (i=0; i<50; i++) {
        printf("=");
    }

    printf("\nEntre com as respostas do usuario:");
    for (i=0; i<4; i++) {
        printf("\nResposta %d: ", i+1);
        scanf(" %c", &respostas[i]);
        strlwr(respostas[i]);
    }

    printf("O usuario acertou: ");
    for (i=0; i<4; i++) {
        if (respostas[i] == gabarito[i]) {
            anwser_cont++;
            printf("( %d ) ", i+1);
        }
    }
    printf("\nForam contabilizados %d acertos. ", anwser_cont);

}