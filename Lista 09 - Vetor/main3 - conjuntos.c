/*Escrever um programa para:
a. Ler todo o conjunto A de seis elementos inteiros;
b. Construir um outro conjunto B formado da seguinte maneira:
    i. Os elementos de índice par têm o valor de A somado com 20.
    ii. Os elementos de índice ímpar tem o valor de A multiplicado por 3.*/

main()
{
    int conj_a[6], conj_b[6];
    int i;

    printf("Digite 6 numeros a seguir");
    for (i=0;i<6;i++) {
        printf("\n%d/5: ",i);
        scanf("%d", &conj_a[i]);
    }

    for (i=0;i<6;i++) {
        if (i%2==0) {
            conj_b[i] = conj_a[i]+20;
        }
        else {
            conj_b[i] = conj_a[i]*3;
        }
    }

    for (i=0;i<6;i++) {
        printf("\nN %d: %d", i, conj_b[i]);
    }
}
