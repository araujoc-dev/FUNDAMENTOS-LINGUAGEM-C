#include <stdio.h>

int main(){
    
    int numero, i ; 
    
    FILE *arquivo;
    char linha[100];
    
    printf("Digite um número inteiro:");
    scanf("%d",&numero);
    
    arquivo= fopen("tabuada.txt","r");
    
    if(arquivo == NULL){
        printf("Não foi possivel ler o arquivo, seu animal");
        return 1;
    }
    printf("Conteúdo do arquivo: \n");

    while(fgets(linha, sizeof(linha), arquivo)!=NULL){
        printf("%s", linha);
    }
    
    fclose(arquivo);

        return 0 ;
}

 
    
    
    


  