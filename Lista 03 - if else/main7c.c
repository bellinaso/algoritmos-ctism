#include <stdio.h>

int main()
{
    float massa, altura, imc;

    printf("Digite a sua massa em quilos: ");
    scanf("%f", &massa);

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    imc = massa/(altura*altura);

    printf("Seu indice de massa corporal e: %.2f", imc);
    if (imc<17.8) {
        printf("\nVoce esta abaixo do peso");
    }
    else if (imc>=17.8 && imc<20.5) {
        printf("\nVoce esta com o peso normal.");
    }
    else if (imc>=20.5 && imc<24.5) {
        printf("\nVoce esta com sobrepeso.");
    }
    else {
        printf("\nVoce esta com obesisdade.");
    }
}