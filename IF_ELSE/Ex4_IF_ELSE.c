#include<stdio.h>

void main()
{
    float T1,T2;

    printf("Insira a nota teste 1:");
    scanf("%f", &T1);
    printf("Insira a nota teste 2:");
    scanf("%f", &T2);
    
    //nota minima T1->8.5
    //nota minima T2->9
    if (T1>8.5 && T2>9)
    {    
        //nota final -> (T1+T2)/2
        float notaFinal=(T1+T2)/2;
        //nota final >=10 -> aprovado
        if (notaFinal>=10)
        {
            printf("Aluno Aprovado");
            if (notaFinal>=17)
            {
                printf(" Aluno deve fazer defesa oral");
            }
            else
            {
                printf(" Aluno nao precisa defesa oral");
            }
            
        }
        else
        {
            printf("Aluno reprovado mas as notas sao supriores as notas minimas");
        }
        
    }
    //caso nota final < 10
    else
    {
        printf("Aluno reprovado");
    }
}