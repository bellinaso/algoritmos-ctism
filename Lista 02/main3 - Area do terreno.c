/*A imobili�ria Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo para ler as dimens�es de um terreno
e depois exibir sua �rea*/

#include <stdio.h>

main(){
    float num1, num2;

    printf("Digite dois numeros a seguir (separados por virgulas): ");
    scanf("%f, %f", &num1, &num2);
    printf("A area do terreno e: %f m quadrados", (num1*num2));

}
