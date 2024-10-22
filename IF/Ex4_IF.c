#include<stdio.h>

void main()
{
    int idade;

    printf("Imsirir idade do utente:");
    scanf("%d", &idade);

    //dar sangue -> idade>=18 e idade<67
    if (idade>=18 && idade<67)
    {
        printf("Utente pode dar sangue");
    }
    //nã dar sangue -> idade
    if (idade<18 || idade>=67)
    {
        printf("Utente nao pode dar sangue");
    }
}