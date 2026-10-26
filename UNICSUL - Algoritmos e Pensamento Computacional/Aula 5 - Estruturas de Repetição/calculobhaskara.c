#include <stdio.h>
#include <math.h> // para usar ceil()

int main()
{
    float a, b, c;
    float delta,x1,x2;
    
    printf("Digite o avalor de A:");
    scanf("%f", &a);

    printf("Digite o avalor de B:");
    scanf("%f", &b);

    printf("Digite o avalor de C:");
    scanf("%f", &c);

    delta=b*b-4*a*c;
    x1 = (-b+sqrt(delta))/2*a;
    x2= (-b-sqrt(delta))/2*a;

    printf("\n O Valor da primeira raiz: %.2f",x1);
    printf("\n O Valor da primeira raiz: %.2f",x2);
    


    return 0;

}