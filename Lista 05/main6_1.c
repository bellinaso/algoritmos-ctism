/*06) PROCURANDO ERROS: Faça um teste de mesa dos programas abaixo. Escolha aleatoriamente as
variáveis e realize os testes.*/

#include <stdio.h>

float raio, area;
main()
{
    printf ("Informe o raio da circunferencia:");
    scanf("%f",&raio);
    area = 3,14 * (2*(raio));
    if (area > 10) {
        printf ("Area maior que 10");
    }
    else {
        printf("Area menor que 10");
    }
}

// No código passado estava faltando a biblioteca stdio.h e a variavel area
// As aspas do pdf não estavam funcionando também então troquei
// Inclui no codigo um else para o usuario entender que o codigo verifica se é maior ou menor que 10