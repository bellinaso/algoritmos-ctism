/*Elaborar um programa para criar o menu igual ao mostrado abaixo e utilizando a estrutura switch/case
calcule as 4 áreas do menu.*/

#include <stdio.h>

main()
{   
    int menu;
    float medida_1, medida_2, medida_3;


    printf("-- Calculadora de areas --");
    printf("\n Seleciona uma opcao abaixo:");
    printf("\n[ 1 ] Triangulo \n[ 2 ] Trapezio \n[ 3 ] Circulo \n[ 4 ] Losango");
    printf("\nSua opcao: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Digite a seguir a base e a altura do trangulo (separadas por virgula): ");
        scanf("%f, %f", &medida_1, &medida_2);

        printf("Area = %.3f", (medida_1*medida_2)/2);
        break;

    case 2:
        printf("Digite a seguir a base menor, base maior e altura do trapezio (separadas por virgula): ");
        scanf("%f, %f, %f", &medida_1, &medida_2, &medida_3);

        printf("Area = %.3f", (medida_1+medida_2)*3/2);
        break;

    case 3:
        printf("Digite a seguir o raio da circunferencia: ");
        scanf("%f", &medida_1);

        printf("Area = %.3f", 3.14*(medida_1*medida_1));
        break;

    case 4:
        printf("Digite a seguir a diagonal maior e menor do losango (separadas por virgula): ");
        scanf("%f, %f", &medida_1, &medida_2);

        printf("Area = %.3f", (medida_1*medida_2)/2);
        break;
    


    default:
        printf("Nenhuma opcao corresponde!");
        break;
    }
}