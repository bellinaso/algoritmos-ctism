/*Escreva a função: HIPOTENUSA. A função recebe o cateto adjacente (b) e o cateto oposto 
(a) e retorna o valor da hipotenusa dado pela seguinte fórmula: Fórmula:  h**2  = a**2 + b**2 */

#include <stdio.h>
#include <math.h>

float pitagoras(float a, float b)
{
    return sqrt(pow(a,2)+pow(b,2));
}

int main(void)
{
    float a, b;
    printf("\nCalculadora de pitagoras");
    printf("\n========================");
    printf("\nEntre com os lados [a] e [b] separados por virgula: ");
    scanf("%d, %d", &a, &b);
    printf("%.2f", pitagoras(a,b));
}