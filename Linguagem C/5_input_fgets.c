#include <stdio.h>

int main(){

    /*
        Para ler até o fim da linha, use: fgets
        * Se houver uma quebra de linha pendente na entrada padrão, é preciso limpar a entrada antes
    */    

    int idade;
    char nome[50];

    printf("Digite o valor da idade: ");
    scanf("%d", &idade);
    printf("Digite o nome: ");
    /* variavel, tamanho, entrada padrão
        - stdin = standart input
    */
    fgets(nome, 50, stdin);
    
    printf("Nome: %s, Idade: %d\n", nome, idade);

    return 0;
    
}