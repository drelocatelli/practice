#include <stdio.h>
int main(){

    double b1, b2, h, area;

    printf("Cálculo da área do trapézio: \n");
    printf("BMX: ");
    scanf("%lf", &b1);

    printf("Bm: ");
    scanf("%lf", &b2);

    printf("h: ");
    scanf("%lf", &h);

    area = (b1 + b2) / 2.0 * h;

    int intarea = (int) area;

    printf("\nÁrea = %.1lf", area);
    printf("\nÁrea = %d\n", intarea);
    
    return 0;
    
}