#include<stdio.h>

void main()
{
    int n;

    printf("Imsira numero: ");
    scanf("%d",&n);

    if (n!=0)
    {
        //avaliar se e positivo o negativo
        if (n>0)
        {
            printf("e um numero positivo");
        }
        else
        {
            printf("e um numero negativo");
        }
        
    }
    else
    {
        printf("Numero imserido igual a 0");
    }
}