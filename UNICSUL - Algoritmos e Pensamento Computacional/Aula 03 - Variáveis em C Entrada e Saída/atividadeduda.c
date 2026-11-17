#include <stdio.h>

int main(){
    float raio,perimetro;
    
    printf("Qual a medida do raio(em cm)");
    scanf("%f",&raio);
    
    perimetro = (float) 2 * 3.14 * raio;
    
    printf("O perimetro da circuferencia é:%.2f",perimetro);
    
    return 0;
}