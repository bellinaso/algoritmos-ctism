#include <stdio.h>

main ()
{
    char nome;
    float peso, media=0;
    int idd, cont_idd=0;

    while (nome != 'F') {
        printf ("\nDigite seu nome (F para finalizar): ");
        scanf (" %c", &nome);

        printf ("Digite sua idade: ");
        scanf ("%d", &idd);

        printf ("Digite seu peso em Kg: ");
        scanf ("%f", &peso);

        if (peso > 80){

            media += idd;
            cont_idd+=1;
        }
        if (idd >= 20 && idd <= 30) {

            printf ("O usuario %c tem %d anos", nome, idd);
        }
        printf ("\nA media de idade das pessoas com mais de 80 Kg eh: %.2f", (media/cont_idd));
    }
}

// Neste caso n�o haveria diferen�a entre utilizar o while ou o do...while, pois em ambas situa��es o programa seria executado ao menos uma vez, a n�o ser que fosse perguntado antes de entrar no la�o.
// Decidimos utilizar apenas o while para melhor leitura do c�digo
