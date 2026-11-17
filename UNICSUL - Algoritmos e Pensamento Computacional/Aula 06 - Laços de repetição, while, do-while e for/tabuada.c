#include <stdio.h>
    int main(){

    int numero, contador;
    
    printf("Digite o número da tabuada:");
    scanf("%d",&numero);
    for (contador = 1; contador <=10; contador ++){
        printf("%d x %d = %d \n", numero, contador, numero*contador );
    }

   
   
   
   
    
    return 0 ;
}