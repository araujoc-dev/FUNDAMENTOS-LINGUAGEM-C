#include <stdio.h>

int main()
{
    int manha, tarde, noite, total;
    printf("Quantidades de itens de manha:");
    scanf("%d",&manha);
    printf("Quantidades de itens de tarde:");
    scanf("%d",&tarde);
    printf("Quantidades de itens de noite");
    scanf("%d",&noite);
    total = manha+tarde+noite;
    printf("Total recebido:%d",total);
    
    return 0;
}