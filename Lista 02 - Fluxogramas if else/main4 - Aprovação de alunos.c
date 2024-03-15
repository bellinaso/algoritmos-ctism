/*Construir um algoritmo que leia dois valores. Um valor representa a média aritmética; o outro o número total de
faltas. O programa deve imprimir APROVADO se a média for maior ou igual a 7.0 e o número total de faltas for inferior
a 20; caso contrário, deve mostrar REPROVADO.*/

#include <stdio.h>

main(){
    float nota;
    int faltas;

    printf("Digite a media do aluno e a quantidade de faltas (separado por virgulas): ");
    scanf("%f, %d", &nota, &faltas);

        printf("A nota final do aluno foi de %.1f \n", nota);
        printf("A quantidade de faltas foram %d \n", faltas);

    if ((nota>=7) && (faltas<20)) {
        printf("O aluno foi aprovado :) \n");
    }
    else {
        printf("O aluno foi reprovado :( \n");
    }
}
