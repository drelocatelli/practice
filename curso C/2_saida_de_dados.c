#include <stdio.h>
#include <string.h>

int main(){

    // inteiro
    int x = 21;
    printf("%d", x);
    printf("\n");

    //float
    float y = 1.32101;
    printf("%f", y);
    printf("\n");

    // double (real)
    double z = 2.34567;
    printf("%lf", z);
    printf("%.2lf", z);
    printf("\n");

    // char 
    char genero = 'F';
    printf("%c", genero);
    printf("\n");


    // string
    char nome[50];
    strcpy(nome, "Andressa");
    printf("%s", nome);
    printf("\n");

    printf("------------------------------\n");
    printf("A funcionária %s, sexo %c, ganha %.2lf reais e tem %d anos.", nome, genero, z, x);
    printf("\n");
    
    return 0;
}