#include <stdio.h>

main()
{
    float peso_terra, peso_planet;
    int planet_num;

    printf("-- Calculadora de massa nos planetas --\n");
    printf("[ 1 ] Mercurio \n[ 2 ] Venus \n[ 3 ] Marte \n[ 4 ] Jupiter \n[ 5 ] Saturno \n[ 6 ] Urano");

    printf("\nSua opcao: ");
    scanf("%d", &planet_num);

    printf("Sua massa na terra: ");
    scanf("%f", &peso_terra);

    switch(planet_num)
    {
    case 1:
        peso_planet = (peso_terra/10)*0.37;
        break;
    case 2:
        peso_planet = (peso_terra/10)*0.88;
        break;
    case 3:
        peso_planet = (peso_terra/10)*0.38;
        break;
    case 4:
        peso_planet = (peso_terra/10)*2.64;
        break;
    case 5:
        peso_planet = (peso_terra/10)*1.15;
        break;
    case 6:
        peso_planet = (peso_terra/10)*1.17;
        break;
    default:
        printf("\nNenhuma alternativa encontrada.");
    }

    printf("\nSeu peso nesse planeta seria: %.2f", peso_planet);
}
