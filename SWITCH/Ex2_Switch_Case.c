#include<stdio.h>

void main()
{
    int idadeAtleta;
    printf("Insira a sua idade:");
    scanf("%d",&idadeAtleta);

    switch (idadeAtleta)
    {
        case 11:
        case 12:
            printf("Juvenil- Desconto taxa de inscricao");
            break;
        case 13:
        case 14:
        case 15:
            printf("Juvenil");
            /*
            if (idadeAtleta==11 || idadeAtleta==12)
            {
                printf("Juvenil- Desconto taxa de inscriçao");
            }
            */
            break;

        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
            printf("Junior");
            break;    
        
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
            printf("Profissiomal");
            break;

        default:
            printf("Idade Invalida");
            break;
    }
}