#include<stdio.h>
#include<stdlib.h>
main(){
    int num,multiplo_10=0,multiplo_3=0,cont=0,produto_par=1;
    float soma_impar=0;
    do {
        cont =cont + 1;
        printf ("entre com o numero: ");
        scanf ("%d",&num);
        if (num%2!=0) {
            soma_impar= soma_impar + num;
        }
        if (num%2==0){
            produto_par=produto_par*num;
        }
        if (num%10==0){
            multiplo_10= multiplo_10 + 1;
        }
        if (num%3==0){
            multiplo_3= multiplo_3 + 1;
        }
    } while(cont<5);
    printf ("\nSoma dos numeros impares:%.2f",soma_impar);
    printf ("\nProduto dos numeros pares:%d",produto_par);
    printf ("\nNumeros multiplos de dez:%d",multiplo_10);
    printf ("\nNumeros multiplos de tres:%d",multiplo_3);
}
// Nao mudou nada, mas a diferen�a entre o while e o do...while � que a condi��o respectivamente ser� verificada antes e depois da execu��o do c�digo, mas na maioria das vezes o c�digo ser� executado ao menos uma vez de qualquer forma.
