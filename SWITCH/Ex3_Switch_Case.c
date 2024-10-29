#include<stdio.h>

void main()
{
    /* (Kw*custoKw)+(Kw*custo)*0.23 */
    float consomoKw;
    char tipoCliente;
    
    printf("Identifique o tipo de cliente!!!!!!!!!!\n");
    printf("[A]-Particular Continente\n");
    printf("[B]-Particulares Ilhas\n");
    printf("[C]-Pequenas empresas\n");
    printf("[D]-Médias e grandes empresas\n");
    printf("[E]-Estado e organismos públicos\n");
    
    printf("Insira o tipo de cliente: ");
    scanf("%c",&tipoCliente);
    
    printf("Insira a seu consomo de energia em Kw:");
    scanf("%f",&consomoKw);



    float custoTotal;

    switch (tipoCliente)
    {
        case 'A':
            custoTotal=(consomoKw*0.1865)+(consomoKw*0.1865)*0.23;    
            printf("O custo Total do cliente e %.2f euros", custoTotal);
            break;
        case 'B':
            custoTotal=(consomoKw*0.1875)+(consomoKw*0.1875)*0.23;    
            printf("O custo Total do cliente e %.2f euros", custoTotal);
            break;
        case 'C':
            custoTotal=(consomoKw*0.1754)+(consomoKw*0.1754)*0.23;    
            printf("O custo Total do cliente e %.2f euros", custoTotal);
            break;
        case 'D':
            custoTotal=(consomoKw*0.1592)+(consomoKw*0.1592)*0.23;
            printf("O custo Total do cliente e %.2f euros", custoTotal);
            break;
        case 'E':
            custoTotal=(consomoKw*0.1311)+(consomoKw*0.1311)*0.23;
            printf("O custo Total do cliente e %.2f euros", custoTotal);
            break;
    
        default:
        printf("Cliente Invalido");
        break;
    }
}
