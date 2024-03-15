/*Fazer um programa para receber uma string do usuário (máx. 50
caracteres) e fazer uma estatística dos caracteres digitados. Por exemplo,
para a string "O EXERCICIO E FACIL"”, a estatística mostrada será 'O' = 2, '
'=3, 'E' = 3, 'X' = 1, 'R' = 1, 'C' = 3, 'I' = 3, 'F' =1, 'A' = 1, 'L' = 1.
*/

#include <stdio.h>
#include <string.h>

main()
{
    char frase[50], alfateto[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i, j, contLetras[26];

    for(j=0; j<26; j++) {
        contLetras[j] = 0;
    }

    printf("Entre com uma frase de ate 50 caracteres: ");
    scanf("%s", &frase);

    for(i=0; i<50; i++) {
        for(j=0; j<26; j++) {
            if(frase[i] == alfateto[j]) {
                contLetras[j]++;
                break;
            }
        }
    }
    for(j=0; j<26; j++) {
        if(contLetras[j] != 0) {
            printf("\nA letra [%c] apareceu %d vezes", alfateto[j], contLetras[j]);
        }
    }
}