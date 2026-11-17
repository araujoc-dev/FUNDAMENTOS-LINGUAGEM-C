#include <stdio.h>
#include <math.h>

int main()
{
    float area, largura,valor,totala,totalc,custo;
    printf("Qual a largura da área?");
    scanf("%f",&area);
    printf("Qual a comprimento da área?");
    scanf("%f",&largura);
    printf("Qual o valor de cada caixa?");
    scanf("%f",&valor);
    totala = ceil(area*largura);
    totalc = totala/2.5;
    custo = totalc * valor;
    printf("Area total a ser revestida: %.2f\n",totala);
    printf("Quantidade de caixas necessárias:%.2f\n",totalc);
    printf("Custo total da compra:R$ %.2f\n",custo);
    
    
    return 0;
}