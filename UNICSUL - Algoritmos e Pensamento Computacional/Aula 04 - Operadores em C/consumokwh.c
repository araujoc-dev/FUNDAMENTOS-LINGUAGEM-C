#include <stdio.h>

int main()
{
    float potencia, horas, consumo;
    printf("Potencia (watts):");
    scanf("%f",&potencia);
    printf("Horas de uso por dia?");
    scanf("%f",&horas);
    consumo = (potencia * horas*30)/1000;
    printf("Consumo mensal: %.2f kWh",consumo);
    return 0;
}