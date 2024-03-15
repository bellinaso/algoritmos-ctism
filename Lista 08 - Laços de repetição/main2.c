/*#include<stdio.h>
float a,b,P;
char resp;
main(){
resp= ‘s’;
while ((resp == ‘s’) || (resp == ‘S’) || (resp == ‘sim’) || (resp == ‘SIM’))
{
printf(“Entre com A”);
scanf(“%f”,&a);
printf(“Entre com B”);
scanf(“%f”,&b);
P = a-b;
printf(“O valor de P:%f”,P);
printf(“Deseja continuar S/N????”);
scanf(“\n%c”,&resp);
}
}
*/

#include <stdio.h>

int main()
{
    float n1, n2;
    char opc;

    printf("Voce deseja calcular subtracao? [s/n] ");
    scanf(" %c", &opc);

    while (opc == 's' || opc == 'S') {
        printf("\nEntre com dois valores separados por virgula: ");
        scanf("%f, %f", &n1, &n2);
        printf("\n%.2f - %.2f = %.2f", n1, n2, (n1-n2));
        printf("\nDeseja continuar? [s/n] ");
        scanf(" %c", &opc);
    }
}
