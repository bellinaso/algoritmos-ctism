//  Leia a inicial do funcionario e o salario atual. apos exiba o % de aumento, salario atual e novo

# include <stdio.h>

main()
{
    int aumento;
    float salario;

    printf("Digite seu salario atual: R$");
    scanf("%f", &salario);



    if (salario < 2000) {
        aumento = 10;
    }
    else {
        aumento = 5;
    }
    printf("Voce recebera %d por cento de aumento!", aumento);
    printf("\nSeu salario atual e de: R$%.2f", salario);
    printf("\nSeu novo salario sera de: R$%.2f", salario+(salario*aumento/100));
}
