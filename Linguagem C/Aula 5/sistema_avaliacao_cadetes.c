#include <stdio.h>
int main(){
    
    int rodada = 1;
    int pontuacao;
    int total = 0;
    
 while(rodada <=3){
     printf("Digite os pontos da rodada %d: ", rodada);
     scanf("%d",&pontuacao);
     rodada++;
     total = total + pontuacao;
     
 }
    printf("Valor total de pontos é: %d", total);
    
    
    
    
    
    
    return 0 ;
    
    
}
