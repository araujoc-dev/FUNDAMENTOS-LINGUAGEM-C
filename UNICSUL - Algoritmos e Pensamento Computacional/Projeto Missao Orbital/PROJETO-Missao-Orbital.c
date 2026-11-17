#include <stdio.h>

int main() {

    int codigoCadete;
    int etapa;
    int pontos;
    int total;
    int continuar;

    float media;



    do {

        printf("\n=====================================\n");
        printf("        MISSAO ORBITAL\n");
        printf("=====================================\n");

        
        printf("Codigo do cadete: ");
        scanf("%d", &codigoCadete);

       
        total = 0;


        for (etapa = 1; etapa <= 3; etapa++) {

            printf("\nPontuacao da etapa %d: ", etapa);
            scanf("%d", &pontos);


            
            while (pontos < 0 || pontos > 100) {

                printf("Pontuacao invalida!\n");
                printf("Digite uma pontuacao entre 0 e 100: ");
                scanf("%d", &pontos);
            }


           
            total = total + pontos;
        }


       
        media = total / 3.0;


        

        printf("\n---------- RESULTADO ----------\n");

        printf("Cadete: %d\n", codigoCadete);

        printf("Pontuacao total: %d pontos\n", total);

        printf("Media: %.2f\n", media);



        if (media >= 85.0) {

            printf("Classificacao: COMANDANTE DA MISSAO\n");
            printf("Treinamento concluido com excelencia.\n");

        }
        else if (media >= 70.0) {

            printf("Classificacao: PILOTO APROVADO\n");
            printf("Cadete autorizado para a missao.\n");

        }
        else if (media >= 50.0) {

            printf("Classificacao: CADETE EM RECUPERACAO\n");
            printf("Novo treinamento recomendado.\n");

        }
        else {

            printf("Classificacao: TREINAMENTO REINICIADO\n");
            printf("Cadete ainda nao autorizado.\n");
        }


        
        if (total == 300) {

            printf("\nPONTUACAO MAXIMA!\n");
        }


        printf("-------------------------------\n");


        
        printf("\nAvaliar outro cadete? 1-Sim | 0-Nao: ");
        scanf("%d", &continuar);


    } while (continuar == 1);


    
    printf("\nSistema encerrado.\n");


    return 0;
}