/*Fa�a um programa que:
a) Leia uma n�mero N inteiro entre 3 e 10.
b) Leia uma matriz de n�meros reais de tamanho N x N. Obs.: Caso exista algum n�mero menor que
zero nesta matriz, atribua a este termo o valor zero automaticamente.
c) Calcule e imprima a soma da diagonal principal da matriz lida, e a mesma no formato matricial.*/

#include <stdio.h>
int main ()
{
    float mat[10][10];
    int somadiagonal=0;
    int i, j, n;
    // Enquanto o numero não estiver entre 3 e 10 não sai
    do {
        printf ("N=?");
        scanf ("%d", &n);
    } while (n<3 || n>10);


    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) { // Inseri o loop das colunas

            printf ("Digite o valor da posicao %d, %d da matriz: \n", i+1, j+1);
            scanf("%f", &mat[i][j]); // Inseri o scanf da matriz

            // Se for menor que 0, automaticamente vira 0
            if (mat[i][j] < 0 ) { // Inseri para verificar se é menor que 0
            mat[i][j] = 0;
            } //

            if (i==j) { // Inseri  as chaves {
                somadiagonal += mat[i][j];
            } // }
        }
        printf("\n"); // Inseri para ficar bonito no output
    }
    printf ("A soma da diagonal principal da matriz e: %d\n", somadiagonal);
    for (i=0; i<n; i++) { // Inseri o loop das linhas
        for (j=0; j<n; j++) {

            // Se l e j forem iguais, mostrar o valor
            if (i==j) { // Inseri uma verificação para a diagonal principal
                printf("[ %.2f ]", mat[i][j]);
            }
            else {
                printf("       ");
            }
        }
        printf ("\n");
    }
    return 0;
}
