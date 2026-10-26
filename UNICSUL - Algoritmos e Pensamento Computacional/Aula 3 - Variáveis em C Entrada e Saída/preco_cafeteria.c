#include <stdio.h>

int main(){
    int valor = 5;
    float quantidade, total;
    printf("Quantidade:\n");
    scanf("%f",&quantidade);
    total = valor * quantidade;
    printf("Valor total:%.2f",total);
    return 0;
}