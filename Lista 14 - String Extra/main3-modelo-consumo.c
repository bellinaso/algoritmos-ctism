/*Faça um programa que preencha uma matriz de string com os modelos de cinco carros (exemplos de
modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo desses carros, isto e,
quantos quilômetros cada um deles faz com um litro de combustível. Calcule e mostre:
(a) O modelo de carro mais econômico;
(b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância
de 1.000 quilômetros.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
    char carros[3][10];
    int i, consumo;

    for(i=0; i<3; i++) {
        printf("Digite um modelo de carro: ");
        gets(carros[i]);
        printf("Digite o consumo l/Km: ");
        scanf("%d", &consumo);
    }


}