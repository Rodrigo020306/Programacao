#include<stdio.h>

void main()
{
    float numero1, numero2;

    printf("Imsirir um numero:");
    scanf("%f", &numero1);
    printf("Imsirir otro numero:");
    scanf("%f", &numero2);

    if (numero1>numero2)
    {
        printf("%f>%f",numero1,numero2);
    }
    if (numero2>numero1)
    {
        printf("%f>%f",numero2,numero1);
    }
}