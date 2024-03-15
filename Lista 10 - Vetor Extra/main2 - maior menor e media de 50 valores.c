/*Construa um algoritmo que leia 50 valores inteiros e positivos e:
· Encontre o maior valor
· Encontre o menor valor
· Calcule a média dos números lidos*/

main()
{
    int i, num[50], maior=0, menor=0;
    float media;

    printf("Digite 50 valores inteiros: \n");
    for (i=0;i<50;i++) {
        printf("%d/50: ", i+1);
        scanf("%d", &num[i]);
        media += num[i];
    }
    maior = menor = num[0];

    for (i=0;i<50;i++) {
        if (num[i] > maior) {
            maior = num[i];
        }
        if (num[i] < menor) {
            menor = num[i];
        }
    }
    printf("A media dos numeros eh: %.2f\n", media/50);
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d",menor);
}
