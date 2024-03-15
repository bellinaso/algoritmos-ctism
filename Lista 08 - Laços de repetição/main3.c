/*Ler o nome de um aluno e suas duas notas A e B, e após calcular a
média entre estas duas notas. Repetir esse procedimento para uma turma
composta por cinco alunos, usando o comando do…while.*/

#include <stdio.h>

int main()
{
    float nota1, nota2;
    int cont;
    char nome;

    printf("Digite duas notas e um aluno (Separadas por vírgula)");
    do {
        printf("\nNome: ");
        scanf(" %c", &nome);
        printf("Notas: ");
        scanf("%f, %f", &nota1, &nota2);
        printf("[%d] A media do aluno %c e: %.2f", cont+1, nome, (nota1+nota2)/2);
        cont += 1;
    } while (cont != 5);
}
