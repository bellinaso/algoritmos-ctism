/*Fazer um programa para percorrer uma matriz de tamanho 4x4 e some os elementos da
diagonal principal e diagonal secundária em duas variáveis diferentes.*/

main()
{
    int m[4][4], soma1=0, soma2=0, l, c;

    printf("Digite os inteiros da matriz: \n");

    for (l=0;l<4;l++) {
        for (c=0;c<4;c++) {
            printf("L: %d / C: %d: ", l, c);
            scanf("%d", &m[l][c]);
        }
    }
    for (l=0;l<4;l++) {
        for (c=0;c<4;c++) {
            printf("[ %d ]", m[l][c]);
            if (l == c) {
                soma1 += m[l][c];
            }
            if (l+c == 3) {
                soma2 += m[l][c];
            }
        }
        printf("\n");
    }
    printf("A soma da diagonal principal eh: %d", soma1);
    printf("\nA soma da diagonal secundaria eh: %d", soma2);
}
