#include<stdio.h>

void main()
{
    float taxa = 0.035; //3.5%
    float salarioFunc, salarioMin;

    printf("Imsirir valor salario minimo");
    scanf("%f", &salarioMin);
    printf("Imsirir valor salario funcionario");
    scanf("%f", &salarioFunc);
    
    //Opção 1
    //float diffSalario = salarioFunc-salarioMin
    //float impostoIRS = diffSalario*taxa

    //Opção 2
    float impostoIRS = (salarioFunc-salarioMin)*taxa;

    printf("Imposto adicional IRS: %f euros", impostoIRS);
}