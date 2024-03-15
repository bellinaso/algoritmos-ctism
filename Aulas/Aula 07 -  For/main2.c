/*Desenvolver algoritmo que dado um conjunto de N números, calcular a média
aritmética dos mesmos.
*/

int main()
{
    float media, valor;
    int c, num;

    printf("Digite quantos valores deseja adicionar: ");
    scanf("%d", &num);

    for (c=0; c<num; c++) {
        printf("Entre com %do valor: ", c+1);
        scanf("%f", &valor);
        media += valor;
    }
    printf("A media dos valores acumulados foi: %.3f", media/c);
}
