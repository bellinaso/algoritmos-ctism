/*Escreva um programa que receba do usu�rio um vetor com 20 valores inteiros e
apresente o maior, o menor e suas respectivas posi��es em que os mesmos foram informados.
Caso existam n�meros iguais mostre a posi��o da primeira ocorr�ncia.*/

#include <stdio.h>
#define TAM 5 //cria uma constante
int main() {
    int vet[TAM], i, j/*Inseri j*/, maior, posMaior, menor, posMenor;


    maior = menor = 0; //
    for (i = 0; i < TAM; i++) {
        printf("Digite um inteiro: "); // Inseri uma instru��o
        scanf("%i", &vet[i]);
        if (maior == menor && menor == 0) { // Inseri uma verifica��o para definir um maior e um menor para meio de compara��o
            maior = menor = vet[i]; //
        } //
    }
    posMaior = 0;
    for (i = 0; i < TAM; i++) {
        if (vet[i] > maior) { // Inseri a compara��o se for maior
            maior = vet[i];
            posMaior = i;
        } //
    }
    posMenor = 0;
    for (i = 0; i < TAM; i++) {
        if (vet[i] < menor) { // Inseri a compara��o se for menor
            menor = vet[i];
            posMenor = i; // Inseri a posi��o do menor
        }
    }
    printf("Vetor: \n");
    for (i = 0; i < TAM; i++) {
        for (j=0; j<TAM; j++) { // Inseri um la�o de j para que TODOS elementos possam ser comparados entre si
            if (vet[i] == vet[j] && i != j && i < j) { // Verifica��o se h� igual
                printf("O numero: %d se repete nas posicoes %d e %d\n", vet[i], i, j); // Mostra ao usuario as posi��es repetidas
            }//
        }
    }
    printf("\nMaior valor: %i - posicao: %i", maior, posMaior+1);
    printf("\nMenor valor: %i - posicao: %i", menor, posMenor+1);
    return 0;
}
