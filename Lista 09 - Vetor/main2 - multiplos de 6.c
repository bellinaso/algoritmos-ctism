/*Armazenar 8 n�meros em um vetor e imprimir todos os n�meros. Ao final, teremos o total
de n�meros m�ltiplos de seis digitados.
*/

#include <stdio.h>

main()
{
    int v[8], cont6=0, i;

    for(i=0;i<8;i++) {
        printf("Digite %d/7 inteiros: ", i);
        scanf("%d", &v[i]);

        if(v[i]%6==0) {
            cont6++;
        }
    }
    printf("Os valores inseridos sao: \n");
    for(i=0;i<8;i++) {
        printf("%d, ", v[i]);
    }
    printf("\nForam inseridos %d valores multiplos de 6", cont6);
}
