#include <stdio.h>
#include <math.h> // para usar ceil()

int main() {
    int participantes, jogadoresPorTime, computadores;
    float potenciaPC, duracao, precoKWh, precoKit, outrosCustos;
    
    // Entradas
    printf("Quantidade total de participantes: ");
    scanf("%d", &participantes);
    
    printf("Quantidade de jogadores por time: ");
    scanf("%d", &jogadoresPorTime);
    
    printf("Quantidade de computadores: ");
    scanf("%d", &computadores);
    
    printf("Potencia media de cada computador (em Watts): ");
    scanf("%f", &potenciaPC);
    
    printf("Duracao do evento (em horas): ");
    scanf("%f", &duracao);
    
    printf("Preco do kWh de energia: ");
    scanf("%f", &precoKWh);
    
    printf("Preco do kit de alimentacao por participante: ");
    scanf("%f", &precoKit);
    
    printf("Outros custos do evento: ");
    scanf("%f", &outrosCustos);
    
    // Cálculos
    int times = (int) ceil((float)participantes / jogadoresPorTime);
    float consumoEnergia = (computadores * potenciaPC * duracao) / 1000; // kWh
    float custoEnergia = consumoEnergia * precoKWh;
    float custoAlimentacao = participantes * precoKit;
    float custoTotal = custoEnergia + custoAlimentacao + outrosCustos;
    float custoMedio = custoTotal / participantes;
    
    // Relatório
    printf("\n===== Relatorio Arena Tech =====\n");
    printf("Quantidade de times: %d\n", times);
    printf("Consumo estimado de energia: %.2f kWh\n", consumoEnergia);
    printf("Custo da energia: R$ %.2f\n", custoEnergia);
    printf("Custo da alimentacao: R$ %.2f\n", custoAlimentacao);
    printf("Outros custos: R$ %.2f\n", outrosCustos);
    printf("Custo total do evento: R$ %.2f\n", custoTotal);
    printf("Custo medio por participante: R$ %.2f\n", custoMedio);
    
    return 0;
}
