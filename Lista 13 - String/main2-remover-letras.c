/*Escreva um programa em C para ler uma frase e uma letra. A seguir retirar da frase, todas
as letras iguais à informada. Imprimir a frase modificada.
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

main()
{
    char string[100], string2[100], caractere[2];
    int i, j=0;

    printf("Entre com a string: (ate 100 digitos) ");
    gets(string);

    printf("Entre com o caractere que sera removido: ");
    gets(caractere);

    for (i=0; i<strlen(string); i++) {
        // Se a letra for diferente do caractere, ele incrementa no outro vetor na posição que só aumenta nessa condição
        if (string[i] != caractere[0]) {
            string2[j] = string[i];
            j++;
        }
    }

    puts(string2);
}