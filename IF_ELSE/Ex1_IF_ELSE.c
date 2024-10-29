#include<stdio.h>

void main()
{
    int numero;

    printf("Insira numero inteiro:");
    scanf("%d", &numero);

    if(numero%2 == 0)
    {
        //
        printf("Numero e par");
    }
    else
    {
        printf("Numero e impar");
    }

}