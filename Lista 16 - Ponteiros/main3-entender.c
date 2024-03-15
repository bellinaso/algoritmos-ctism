/*Qual o valor de y no final do programa? Tente primeiro descobrir e depois verifique
no computador o resultado. A seguir, escreva um /comentário/ em cada comando de
atribuição explicando o que ele faz e o valor da variável à esquerda do '=' após sua
execução.*/

#include <stdio.h>

int main()
{
    int y, *p, x;
    y = 0; // Y definido como 0
    p = &y; // ponteiro p recebe o endereço de y
    x = *p; // x recebe o conteúdo do ponteiro p
    x = 4; // x recebe 4
    (*p)++; // o conteúdo de p recebe +1
    x--; // x recebe -1
    (*p) += x; // o conteúdo de p recebe x (3)
    printf("y = %d\n", y); // supostamente y é 0 mas na verdade y recebe o valor de x
    return (0);
}
