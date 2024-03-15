/*Faça um programa que receba várias idades e que calcule e mostre a média das idades
digitadas. Finalize digitando a idade igual a zero.*/

int main()
{
    int cont = 0, idade = -1;
    float media = 0;

    printf("Digite varias idades abaixo: (0 para sair)\n");
    while (idade != 0) {

        printf("-> ");
        scanf("%d", &idade);

        cont += 1;
        media += idade;
        printf("[ debuug ] idade = %d; media = %d; cont = %d;\n", idade, media, cont);
    }
    printf("A media de idades e igual a %.2f anos", media/cont);

    return 0;
}
