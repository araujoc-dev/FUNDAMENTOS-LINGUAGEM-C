#include <stdio.h>
#include <math.h>

int main(){

float  nota1, nota2, media, frequencia;

printf("Qual a sua primeira nota: \n");
scanf("%f",&nota1);
printf("Qual a sua segunda nota:\n ");
scanf("%f",&nota2);
media = nota1+nota2/2;
printf("Qual a sua frequência em porcentagem: \n");
scanf("%f",&frequencia);

if (frequencia>=75){
    if(media>=6){
        printf("\n parabéns , você foi aprovado com média %.2f", media );
        printf("\ne também com frequência %.2f,", frequencia);
    }
    else{
    printf("\n Você foi reprovado com média %.2f", media);
        
    }
}
    else {
    printf("\n você foi reprovado por frequência");
    
}
return 0 ;
}