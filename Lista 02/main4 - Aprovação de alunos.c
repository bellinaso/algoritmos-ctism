/*Construir um algoritmo que leia dois valores. Um valor representa a m�dia aritm�tica; o outro o n�mero total de
faltas. O programa deve imprimir APROVADO se a m�dia for maior ou igual a 7.0 e o n�mero total de faltas for inferior
a 20; caso contr�rio, deve mostrar REPROVADO.*/

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
