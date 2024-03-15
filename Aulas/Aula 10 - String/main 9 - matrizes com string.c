
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define MAX 3

main()
{
    int l, c, notas[MAX][4]; // 3 alunos e 4 notas
    float media_aluno, media_turma = 0;
    char alunos[MAX][15]; // 3 alunos e 15 letras no nome

    // Para cada aluno...
    for (l=0; l<MAX; l++) {
        printf("====================");
        printf("\nInforme o nome do aluno: ");
        scanf("%s", &alunos[l]);
        media_aluno = 0;

        // Insira as notas do aluno
        for (c=0; c<4; c++) {
            printf("Informe a nota do aluno: ");
            scanf("%d", &notas[l][c]);
            media_aluno += notas[l][c];
        }
        media_turma += (media_aluno/4);
    }
    printf("Os alunos com a media maior que a geral:\n");

    for (l=0; l<MAX; l++) {
        c=0;
        while (c<4) {
            if (media_aluno > media_turma) {
                printf("\n%s | %.2f", alunos[l], notas[l][c]);
            }
            break;
        }
    }
}
