#include <stdio.h>

int main()
{
    float hora, minuto, total;
    printf("Horas?");
    scanf("%f",&hora);
    printf("Minutos?");
    scanf("%f",&minuto);
    total = (hora * 60) + minuto;
    printf("Ja se passaram %.2f minutos desde o inicio do dia.",total);
    return 0;
}