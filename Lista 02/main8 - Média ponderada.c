/*Desenvolva um fluxograma que receba duas notas reais (n1 e n2) e mostre o valor da m�dia que � calculada da
seguinte forma: media = (n1* 2 + n2 * 3) / 5 Al�m disso, mostre a situa��o do aluno (aprovado, recupera��o ou
reprovado). Se a m�dia for maior ou igual a 6, o aluno est� aprovado por m�dia; se for menor que 6 e maior ou igual a
2, o aluno est� em recupera��o; se for menor que 2, o aluno est� reprovado.*/

#include <stdio.h>

main(){
    float num1, num2, media;

    printf("Insira duas notas (separadas por virgulas): ");
    scanf("%f, %f", &num1, &num2);

    media = (num1*2 + num2*3)/5; // produto dos valores pelo peso, dividido pela soma dos pesos

    printf("A media do aluno foi %.2f \n", media);
    if (media >= 60) {
        printf("O aluno foi aprovado :)");
    }
    else if (media>=20) {
        printf("O aluno esta em exame :/");
    }
    else {
        printf("O aluno esta reprovado");
    }
}
