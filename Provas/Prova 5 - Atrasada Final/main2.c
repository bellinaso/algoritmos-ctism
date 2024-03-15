#include <stdio.h>

int main()
{
    char nomes[5][20];
    float consumo[5], carroEco = 0;
    int posCarroEco;

    printf("Consumos de carros");
    printf("\n==================");
    printf("\nInsira os carros:");
    for(int i=0; i<5; i++) {

        printf("\nCarro %d: ", i+1);
        scanf("%s", &nomes[i]);

        printf("Consumo do carro: ");
        scanf("%f", &consumo[i]);

        if(carroEco != 0) {
            if(consumo[i] < carroEco) {
                posCarroEco = i;
                carroEco = consumo[i];
            }
        }
        else {
            posCarroEco = i;
            carroEco = consumo[i];
        }
    }
    printf("\nO carro mais economico eh o [%s] que faz [%.2f Km/L]", nomes[posCarroEco], carroEco);
    printf("\n\nOs carros em 2000Km farao:");
    for(int i=0; i<5; i++) {
        printf("\n\nCarro %s", nomes[i]);
        printf("\nConsumo: %.2fKm/L", consumo[i]*2000);
    }
}
