/*Escreva um algoritmo para ler a nota de 10 alunos e escrever a nota mais alta, ou seja, a maior nota entre as 10
lidas.*/

int main()
{
    float nota, maior = 0;
    int c, aluno;

    for (c=0; c<10; c++) {
        printf("\nDigite a nota do %do aluno: ", c+1);
        scanf("%f", &nota);
        if (nota>maior) {
            maior = nota;
            aluno = c+1;
        }
    }
    printf("\nA maior nota foi %.2f e foi do %do aluno", maior, aluno);

    return 0;
}
