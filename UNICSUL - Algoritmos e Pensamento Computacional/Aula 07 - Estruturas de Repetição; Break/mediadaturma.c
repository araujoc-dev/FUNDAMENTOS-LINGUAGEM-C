#include <stdio.h>

int main() {
    int quantidadeAlunos;
    float nota, somaNotas = 0.0f, mediaTuma;

    do{
        printf("Digite a quantidade de alunos da turma: ");
        scanf("%d", &quantidadeAlunos);
    if (quantidadeAlunos<=0){
        printf("Quantidade inválidade de alunos: \n");
    }
    
    } while(quantidadeAlunos<=0);
    
    for(int i = 1; i<=quantidadeAlunos;i++){
        do{
            printf("Digite a nota do aluno %d: ",i);
            scanf("%f",&nota);
            if(nota<0 || nota>10){
                printf("Nota inválida, digite novamente!");
            }
            
        }while(nota<0 || nota>10);
        
        somaNotas+= nota;
        
    }
    
    mediaTuma = somaNotas/quantidadeAlunos;
    
    printf("A média da turma é: %.2f \n", mediaTuma);
    
    return 0;
}