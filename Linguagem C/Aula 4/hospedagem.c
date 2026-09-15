#include <stdio.h>

int main(){
    char TipoHosp;
    int qntDiaria;
    float valorDiaria, valorTotal;
    printf("Qual tipo de Hospedagem (S - D - T)? ");
    scanf("%c",&TipoHosp);
    
    printf("Qual a quantidade de diárias? ");
    scanf("%d",&qntDiaria);
    
    switch(TipoHosp){
        case 'S':
        case 's':
            valorDiaria = 300.0f;
            break;
        case 'D':
        case 'd':
            valorDiaria = 450.0f;
            break;
        case 'T':
        case 't':
            valorDiaria = 500.0f;
            break;
        
        default:
            printf("\n Tipo Invalido\n");
        
    }
    valorTotal = valorDiaria * qntDiaria;
    printf("\n O valor total de Hospedagem é: R$%.2f", valorTotal);
    return 0;
}