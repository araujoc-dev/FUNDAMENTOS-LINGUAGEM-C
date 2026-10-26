#include<stdio.h>
int main(){
    int idade;
    printf("Digite sua idade:");
    scanf("%d",&idade);
    printf("Sua idade é:%d\n",idade);
    if (idade>=18){
        printf("Permitido entrar no cabaré!");
    }
    else{
        printf("Negado entrar no cabaré");
    }
return 0;
}
