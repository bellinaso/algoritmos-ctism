/*O programa abaixo tem como propósito que o usuário entre com os nomes e
no final imprima os nomes em ordem alfabética.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
 int i, contador = 0, troca, copia, vetor[100];
 srand(time(NULL));

do{
 troca = 0;
 contador++;
for(i = 0; i < 99; i++){
 if(vetor[i] > vetor[i+1]){
 copia = vetor[i];
 troca = 1;
 }
 }
 }while(troca);
printf("\nApos a ordenacao: Contador: %d\n", contador);
 for(i = 0; i < 100; i++){
 printf("%3d ", vetor[i]);
 }
 return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, j, contador = 0, copia, vetor[100];
    srand(time(NULL));

    for(i=0; i<100; i++) {
        vetor[i] = rand();
    }

    for(i = 0; i < 100; i++) {
        for(j=i+1; j<100; j++) {
            if (vetor[i] > vetor[j]) {
                copia = vetor[i];
                vetor[j] = vetor[i];
                vetor[i] = copia;
                contador++;
            }
        }
    }

    printf("Foram realizadas %d ordenacoes.");
    for (i = 0; i < 100; i++) {
        printf("\n%3d ", vetor[i]);
    }
    return 0;
}