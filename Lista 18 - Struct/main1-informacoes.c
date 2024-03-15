// Construa uma estrutura chamada endereço. Ela deve solicitar a 5 usuários o seu nome, a sua rua, o seu número e o andar em que mora. Após imprima os dados digitados pelo usuário.

#include <stdio.h>

main()
{
    struct endereco {
        char nome[30];
        char rua[50];
        int numCasa;
        int andar;
    } pessoas[5];

    for(int i=0; i<3; i++) {
        printf("Entre com o nome: ");
        scanf("%s", &pessoas[i].nome);

        printf("Entre com o nome da rua: ");
        scanf("%s", &pessoas[i].rua);

        printf("Entre com o numero da moradia: ");
        scanf("%d", &pessoas[i].numCasa);
        
        printf("Entre com o andar: ");
        scanf("%d", &pessoas[i].andar);
    }

    printf("Id | Nome\t\t\t Endereco\t\t\t Numero\t\t Andar\n");
    for(int i=0; i<3; i++) {
        printf("%-2d | %-27s %-31s %-15d %d\n", i,  pessoas[i].nome, pessoas[i].rua, pessoas[i].numCasa, pessoas[i].andar);
    }
}