/*Entrar com um número inteiro e imprimir a raiz quadrada do número caso ele seja positivo e o quadrado do número
caso ele seja negativo.*/

#include <stdio.h>

main()
{
    int N1;

    printf("Digite um numero: ");
    scanf("%d", &N1);
    printf("O numero escolhido foi: %d \n", N1);

    if (N1!=0){
        if(N1>0){
            printf("A raiz quzadrada do numero e %f", sqrt(N1));
        }
        else {
            printf("A quadrado do numero e %f", pow(N1,2));
        }
    }
}
