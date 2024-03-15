// área do círculo

#include <stdio.h>
#include <math.h>

main()
{
    int raio;
    float area;

    printf("Digite o raio da circunferencia: ");
    scanf("%d", &raio);

    if (raio>0){
        area = (3.14)*(pow(raio,2));
        printf("A area da circunferencia e de: %f", area);
    }
    else {
        printf("Nao foi possivel calcular a area pois o valor inserido e menor ou igual a zero");
    }
}
