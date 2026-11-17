#include <stdio.h>
#include <math.h>

int main()
{
    float peso, altura, imc;
    printf("Qual é o seu peso?");
    scanf("%f",&peso);
    printf("Qual é a sua altura (metros)?");
    scanf("%f",&altura);
    imc = peso/pow(altura,2);
    printf("O indice de Massa Corporal é %.2f",imc);
    return 0;
}