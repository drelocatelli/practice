#include <stdio.h>
#include <string.h>

int main(){

    // inteiro
    int x = 10;
    printf("%d", x);
    printf("\n");

    //float
    float y = 1.32101;
    printf("%f", y);
    printf("\n");

    // char 
    char genero = 'F';
    printf("%c", genero);
    printf("\n");

    if(genero == 'F'){
        printf("Feminino\n");
    }

    // string
    char nome[50];
    strcpy(nome, "Andressa");
    printf("%s", nome);
    printf("\n");
    
    return 0;
}