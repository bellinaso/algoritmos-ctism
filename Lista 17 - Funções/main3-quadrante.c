#include <stdio.h>

/*Escreva em C a função VERIFICA_QUADRANTE. A função recebe um valor para x e um
valor para y e retorna o número do quadrante (1,2,3 ou 4).*/

void linha(int len)
{
    for(int i=0; i<len; i++) {
        printf("=");
    }
    printf("\n");
}

float quadrante(float x, float y)
{
    // Primeiro quadrante
    if(x>0 && y>0) {
        return 1;
    }
    else if(x<0 && y>0) {
        return 2;
    }
    else if(x<0 && y<0) {
        return 3;
    }
    else if(x>0 && y<0) {
        return 4;
    }

}

void main()
{
    float quadrX, quardY;
    
    printf("\n\nVerificador de quadrante\n");
    linha(30);

    printf("Entre com um valor para X: ");
    scanf("%f", &quadrX);

    printf("Entre com um valor para Y: ");
    scanf("%f", &quardY);

    linha(30);

    printf("Os valores inseridos no grafico retornam o %.0f quadrante.\n", quadrante(quadrX, quardY));
}