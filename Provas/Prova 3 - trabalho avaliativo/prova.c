#include <stdio.h>
#include <stdlib.h>

#define CONC 10

//         printf("\nNumero aleatorio %d", rand()%10);

main()
{
    int notas[CONC][3], i, l, c, prova[CONC];

    float mediaNotas[CONC], colocados[2], maior=0, segundoMaior=0;

    printf("Concurso para Gerente e Diretor\n");
    for(i=0; i<30; i++) {
        printf("=");
    }

    // Define qual prova cada candidato fez
    for(i=0; i<CONC; i++) {
        prova[i] = rand()%2;
        printf("\nCandidato %d Prova %d", i, prova[i]);
    }

    // Loop dos concorrentes
    for(l=0; l<CONC; l++) {

        // Loop das notas dos concorrentes
        for(c=0; c<3; c++) {

            switch (prova[l]) {

                // Prova de gerente
                case 0:
                    notas[l][c] = rand()%21;
                    mediaNotas[l] = 0;
                    mediaNotas[l] += notas[l][c];
                    break;

                // Prova de diretor
                case 1:
                    notas[l][c] = rand()%11;
                    mediaNotas[l] = 0;
                    mediaNotas[l] += notas[l][c];
                    break;
                
                default:
                    printf("\n\nAlgo deu errado\n\n");
                    break;
            }

        }

    }

    for(i=0; i<CONC; i++) {
        printf("\nCandidato %d: %.2f", i, mediaNotas[i]);
    }

    for(i=0; i<CONC; i++) {
        mediaNotas[i] = (mediaNotas[i]/3);

        // Se for diferente de 0: entrar na verificação
        if (maior != 0 && segundoMaior != 0) {

            // Se a media das notas for maior que o maior: maior = media
            if (mediaNotas[i] > maior) {
                maior = mediaNotas[i];
                colocados[0] = i;
            }
            // Se a media for menor que o maior: segundo maior = media
            if (mediaNotas[i] < maior) {
                segundoMaior = mediaNotas[i];
                colocados[1] = i;
            }

            
        }
        else {
            maior = segundoMaior = mediaNotas[i];
        }
    }

    printf("\nNumero do primeiro colocado: %d", colocados[0]);
    printf("\nParabens!! Voce foi contratado a gerente!");
    
    printf("\nNumero do segundo colocado: %d", colocados[1]);
    printf("\nParabens!! Voce foi contratado a diretor!");
}