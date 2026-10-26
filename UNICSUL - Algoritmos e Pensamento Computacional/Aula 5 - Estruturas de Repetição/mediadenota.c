#include<stdio.h>
int main(){
    int nota1, nota2, media;
    printf("Digite a Primeira nota:");
    scanf("%d",&nota1);
    printf("Digite a Segunda nota:");
    scanf("%d",&nota2);
    media=nota1+nota2/2.0f;
    printf("Sua Média é:%.2f",media);
    
    if (media>=6){
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }
return 0;
}