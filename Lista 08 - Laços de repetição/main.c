/*Exemplo: Criar uma variável para servir como contador, com valor inicial igual a 1.
Enquanto o valor do contador for menor ou igual a 5 ler dois valores a e b, efetuar
uma adição armazenando o resultado em R. Apresentar o valor calculado contido
na variável R e logo após acrescentar ao contador mais 1 e quando o contador
for maior que 5, encerrar o processamento.*/

#include <stdio.h>

int main()
{
    int cont;
    float n1, n2;

    cont = 1;

    while (n1 != 0 || n2 != 0) {
        printf("Escreva os dois %d's valores (separados por virgulas): ", cont);
        scanf("%f, %f", &n1, &n2);
        printf("%.2f + %.2f = %.2f \n", n1, n2, (n1+n2));
        cont++;
    }
}
