#include <stdio.h>
int main(){
    char cpf[12];
    double preco, totalcompra = 0.0;

    printf("Digite o CPF");
    scanf("%11s", &cpf);
    
    do{
        printf("Digite o valor [0 Para encerar]");
        scanf("%lf", &preco);
        
        if (preco>0){
            
            totalcompra += preco;
        }
        
        
    }while (preco != 0);
        
        printf("\nCompra encrerrada\n");
        printf("CPF: %s\n", cpf);
        printf("O total da compra foi: R$ %.2lf\n", totalcompra);
    return 0;
}