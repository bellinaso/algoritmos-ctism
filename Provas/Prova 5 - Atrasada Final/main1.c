#include <stdio.h>

float mediaAritmetica(float *notas)
{
    float media;

    for(int i=0; i<3; i++) {
        media += *notas;
        notas+=1;
    }
    return (media/3);
}

float mediaPonderada(float *notas)
{
    float media;

    media += *notas*5;
    notas+=1;
    media += *notas*3;
    notas+=1;
    media += *notas*2;

    return (media/(5+3+2));

}

int main()
{
    float nota[3], media;
    char opc;

    printf("Calculadora de notas\n");
    printf("====================\n");
    for(int i=0; i<3; i++) {
        printf("Insira a nota %d: ", i+1);
        scanf("%f", &nota[i]);
    }
    do {
        printf("\n\nEscolha qual media deve ser calculada: \n[ A ] Aritmetica \n[ P ] Ponderada \n[ S ] Sair");
        printf("\nEscolha: ");
        scanf(" %c", &opc);
        switch(opc) {
        case 'a':
            media = mediaAritmetica(nota);
            printf("\nA media aritmetica foi de: %.2f", media);
            break;

        case 'p':
            media = mediaPonderada(nota);
            printf("A media ponderada foi de: %.2f", media);
            break;

        case 's':
            printf("Saindo");
            break;

        default:
            printf("Opcao invalida! Tente novamente.");
            break;
        }
    } while(opc != 's');


    return 0;
}
