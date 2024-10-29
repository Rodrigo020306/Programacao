#include<stdio.h>

void main()
{
    float L1,L2,L3;

    printf("Insira o valor do primeiro lado:");
    scanf("%f", &L1);
    printf("Insira o valor do segundo lado:");
    scanf("%f", &L2);
    printf("Insira o valor do terceiro lado:");
    scanf("%f", &L3);
    
    //a soma de doas lados não pode ser menor que o valor do terceiro lado
    if ((L1+L2>L3) && (L3+L2>L1) && (L1+L3>L2))
    {
        printf("O triangulo e valido ");
        if (L1==L2 && L3==L2 && L1==L3)
            {
                printf("e Equilatero");
            }
        else if (L1==L2||L3==L2||L1==L3)
            {
                printf("e Isosceles");

            } 
        else
            {
                printf("e Escaleno"); 
            }
    }
    else
    {
        printf("O triangulo e invalido");
    }
    
}