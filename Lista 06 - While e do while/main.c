/*Faça um programa que receba dez números e que calcule e mostre a quantidade de números
entre 30 e 90.*/

int main()
{
    int cont = 0, cont_num = 0, num;
    while (cont < 10) {
        printf("[ %d/10 ] Digite um numero inteiro: ", cont+1);
        scanf("%d", &num);
        if (num >= 30 && num <= 90) {
            cont_num += 1;
        }
        cont += 1;
    }
    printf("A quantidade de numeros digitados entre 30 e 90 foi de %d vezes", cont_num);

    return 0;
}
