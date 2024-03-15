/*A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um terreno
e depois exibir sua área*/

#include <stdio.h>

main(){
    float num1, num2;

    printf("Digite dois numeros a seguir (separados por virgulas): ");
    scanf("%f, %f", &num1, &num2);
    printf("A area do terreno e: %f m quadrados", (num1*num2));

}
