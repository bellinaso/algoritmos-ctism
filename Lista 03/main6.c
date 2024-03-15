/* Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o pre�o do litro da
gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque. */

#include <stdio.h>

main()
{
    float gas_price, gas_pag, gas_quant;

    printf("Digite o valor/litro: R$");
    scanf("%f", &gas_price);

    printf("Digite o valor que sera adiquirido: R$");
    scanf("%f", &gas_pag);

    gas_quant = gas_pag/gas_price;
    printf("A quantidade a ser abastecida sera: %.2f litros", gas_quant);
}
