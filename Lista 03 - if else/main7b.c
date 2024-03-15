#include <stdio.h>

int main()
{
    float n1, n2, n3, media;

    printf("Digite as notas a seguir (separadas por virgula): ");
    scanf("%f,%f,%f", &n1,&n2, &n3);
    
    media = (n1+n2+n3)/3;

    printf("A media do aluno foi: %.2f", media);
    printf("\nSituacao: ");
    if (media < 5) {
        printf("Recuperacao.");
        printf("\nA nota necessaria sera: %.2f", 10-media+2);
    }
    else {
        if (media < 7) {
            printf("Prova final");
            printf("\nA nota necessaria sera: %.2f", 10-media);
        }
        else {
            printf("Aprovado!");
        }
    }
    return 0;
}
