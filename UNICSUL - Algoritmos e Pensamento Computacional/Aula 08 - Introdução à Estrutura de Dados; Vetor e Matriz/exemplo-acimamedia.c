#include <stdio.h>

int main()
{
    float valores[8];
    float soma = 0.0f,media;
    int acimaMedia = 0;
    for(int i = 0; i<8; i++){
        printf("Digite o valor do %dº: ", i+1);
        scanf("%f", &valores[i]);
        soma+=valores[i];
    }    
    media=soma/8;
    for(int i = 0; i<8; i++){    
        if (valores[i]>media){
            acimaMedia ++;
        }   
    }
    printf("O valor da média é: %.2f \n", media);
    printf("Valores acima da média: %d \n", acimaMedia);
    return 0;
}