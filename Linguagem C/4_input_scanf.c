#include <stdio.h>

int main(){

    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    /*
        - o scanf nao le texto com espaços
        - variaveis char deve definir quantia de caracteres
        - input/output double é sempre ponto
    */
    printf("Digite o valor da idade: ");
    scanf("%d", &idade);
    printf("Digite o salário: ");
    scanf(" %lf", &salario);
    printf("Digite a altura: ");
    scanf("%lf", &altura);
    printf("Digite o nome da pessoa: ");
    scanf("%s", nome);
    
    printf("\n");
    printf("NOME = %s\n", nome);
    printf("Idade = %d anos\n", idade);
    printf("Salário = %.2lf reais\n", salario);
    printf("Altura = %.2lf metros\n", altura);

    printf("\n");

    return 0;   
    
}