#include <stdio.h>

int main() {

    FILE *arquivo;
    FILE *relatorio;

    char local[100];
    char localMaiorConsumo[100];

    double consumo;
    double limite;

    double consumoTotal = 0.0;
    double consumoMedio = 0.0;
    double maiorConsumo = 0.0;

    int quantidadeLocais = 0;
    int locaisAcimaLimite = 0;

    // Abre o arquivo de entrada para leitura
    arquivo = fopen("consumo_campus.txt", "r");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro: nao foi possivel abrir consumo_campus.txt\n");
        return 1;
    }

    // Abre o arquivo de relatorio para escrita
    relatorio = fopen("relatorio_consumo.txt", "w");

    // Verifica se o relatorio foi criado corretamente
    if (relatorio == NULL) {
        printf("Erro: nao foi possivel criar relatorio_consumo.txt\n");

        fclose(arquivo);

        return 1;
    }

    // Le todos os registros do arquivo
    while (fscanf(arquivo, "%99s %lf %lf",
                  local, &consumo, &limite) == 3) {

        // Conta a quantidade de locais analisados
        quantidadeLocais++;

        // Soma o consumo de agua
        consumoTotal += consumo;

        // Identifica o maior consumo
        if (quantidadeLocais == 1 || consumo > maiorConsumo) {
            maiorConsumo = consumo;

            snprintf(localMaiorConsumo,
                     sizeof(localMaiorConsumo),
                     "%s", local);
        }

        // Verifica se o consumo ultrapassou o limite
        if (consumo > limite) {
            locaisAcimaLimite++;
        }
    }

    // Calcula o consumo medio
    if (quantidadeLocais > 0) {
        consumoMedio = consumoTotal / quantidadeLocais;
    }

    // Exibe os resultados no terminal
    printf("\n========================================\n");
    printf("       ECOCAMPUS - CONSUMO DE AGUA\n");
    printf("========================================\n");

    printf("Quantidade de locais: %d\n", quantidadeLocais);

    printf("Consumo total: %.2f litros\n", consumoTotal);

    printf("Consumo medio: %.2f litros\n", consumoMedio);

    if (quantidadeLocais > 0) {
        printf("Maior consumo: %.2f litros\n", maiorConsumo);

        printf("Local com maior consumo: %s\n",
               localMaiorConsumo);
    } else {
        printf("Nao existem registros validos no arquivo.\n");
    }

    printf("Locais acima do limite: %d\n", locaisAcimaLimite);

    printf("========================================\n");

    // Escreve os resultados no arquivo de relatorio
    fprintf(relatorio, "========================================\n");
    fprintf(relatorio, "       ECOCAMPUS - RELATORIO\n");
    fprintf(relatorio, "========================================\n");

    fprintf(relatorio, "Quantidade de locais: %d\n",
            quantidadeLocais);

    fprintf(relatorio, "Consumo total: %.2f litros\n",
            consumoTotal);

    fprintf(relatorio, "Consumo medio: %.2f litros\n",
            consumoMedio);

    if (quantidadeLocais > 0) {
        fprintf(relatorio, "Maior consumo: %.2f litros\n",
                maiorConsumo);

        fprintf(relatorio, "Local com maior consumo: %s\n",
                localMaiorConsumo);
    } else {
        fprintf(relatorio,
                "Nao existem registros validos no arquivo.\n");
    }

    fprintf(relatorio, "Locais acima do limite: %d\n",
            locaisAcimaLimite);

    fprintf(relatorio, "========================================\n");

    // Fecha os arquivos utilizados
    fclose(arquivo);
    fclose(relatorio);

    printf("\nRelatorio criado com sucesso!\n");

    return 0;
}