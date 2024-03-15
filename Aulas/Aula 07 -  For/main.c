/*Exemplo: Faça um algoritmo que calcule a seguinte fórmula:

n
• ∑ (5*i+2) em que ‘n’ é definido pelo usuário
i=3

• Esse tipo de fórmula encaixa-se perfeitamente na estrutura do comando for.
Pode-se separar:
Instrução de preparação: i=3
Condição de saída: i=n
Passo: i = i+1
*/

#include <stdio.h>

int main()
{
    int cont, num, sum=0;

    printf("Digite o numero de somas: ");
    scanf("%d", &num);

    for (cont=3; cont-3<num; cont++) {
        sum+=(5*cont+2);
    }
    printf("A soma final foi: %d", sum);
}
