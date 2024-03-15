/*Elabore um algoritmo que leia uma lista de letras, a qual será terminada pela letra Z ou
quando forem digitadas dez letras. Ao final, o algoritmo deve mostrar a quantidade de
vogais e consoantes lidas. A letra Z não pode ser assumida como consoante para este
caso.*/

#include <stdio.h>

main()
{
    int i, j, buffer, cont_vogais=0, cont_consoantes=0;
    char letra[10], vogais[5]={'a','e','i','o','u'};

    printf("Escreva varias letras: (z para parar)\n");
    for (i=0; i<10; i++) {
        printf("-> ");
        scanf(" %c", &letra[i]);

        if (letra[i] == 'z') {
            break;
        }
        if (letra[i] == 'a' || letra[i] == 'e' || letra[i] == 'i' || letra[i] == 'o' || letra[i] == 'u') {
            cont_vogais++;
        }
        else {
            cont_consoantes++;
        }
    }
    printf("A quantidade de vogais foi igual a: %d", cont_vogais);
    printf("\nA quantidade de consoantes foi igual a: %d", cont_consoantes);
}