#include <stdio.h>

int main(){
    
    int quantidade, i ;
    char dia[10];
    float consumo;
    

    FILE *arquivo;
    
    
    arquivo= fopen("consumo.txt","a");
    
    if(arquivo == NULL){
        printf("Não foi possivel cruar i arqyuvi.\n ");
        return 1;
    }
    printf("Quantos registros deseha cadastrar? ");
    scanf("%d",&quantidade);
    
    for(i = 1; i<=quantidade; i++){
        printf("\nRegistro%d \n", i+1);
    
        
        printf("Dia: ");
        scanf("%9s", dia);
        
        printf("Consumo: ");
        scanf("%f",&consumo);
        
        fprintf(arquivo, "%s  %.2f \n", dia, consumo);
        
        
    }
    fclose(arquivo);
    
    printf("Consumo gravado com sucesso : ");

    return 0 ;
    }
    


  
