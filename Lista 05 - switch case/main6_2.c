/*06) PROCURANDO ERROS: Faça um teste de mesa dos programas abaixo. Escolha aleatoriamente as
variáveis e realize os testes.*/

#include <stdio.h>

float r, x, y, z;
main (){
    x = 9;
    y = 2;
    z = x/y;
    x = y+1;
    y = x/2;

    if (x>y) {
        z = x + y - z;
    }
    else {
        z = x + y;
    }

    if (z > 0) {
        printf("Positivo");
    }
    else if (z < 0) {
        printf("Negativo");
    }
    else {
        printf("O numero e 0");
    }
}

// No código passado estava faltando uma vírgula nas declarações de variáveis, as variaveis estavam inteiras porem deveriam estar float e a biblioteca stdio.h
// Estava sendo usada o nome da variável y em maiúsculo na linha 10
// Para atribuir um valor a uma vavriável estava sendo utilizado <- ao invés de =
// As aspaas utilizadas eram simples e não estavam funcionando pelo pdf, igualmente do sinal de - na linha 13
// Adicionei um else na linha 27 para dizer que o número é 0, assim o usuário não ficaria confuso
// Por mais que não fosse necessario, inclui chaves nos if's, adicionei um else na linha 24 e arrumei a indentação por estética e leitura mais fácil