#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ano, idade, codigo, tempoDeTrabalho, trabalho;

    
    printf("Digite o seu Codigo de 6 digitos: ");
    scanf("%d", &codigo);
    printf("-------------------------------------\n");

    printf("Digite seu Ano de Nascmento: ");
    scanf("%d", &ano);
    printf("-------------------------------------\n");

    printf("Digite seu tempo de trabalho: ");
    scanf("%d", &trabalho);
    printf("-------------------------------------\n");

    idade = (2023 - ano);
    tempoDeTrabalho = trabalho;

    printf("Codigo: %d \n", codigo);
    printf("----------------------------------------\n");

    printf("Idade: %d \n", idade);
    printf("----------------------------------------\n");

    printf("Tempo de Trabalho: %d \n", tempoDeTrabalho);
    printf("----------------------------------------\n");
    printf("========================================\n");
    printf("\n");
    printf("\n");

    
    if (idade >= 65 || tempoDeTrabalho >= 30)
    {
        printf("========================================\n");
        printf("Voce Pode Requerer a Aposentadoria! \n");
        printf("----------------------------------------\n");
        printf("========================================\n");
    }
    else
    {
        printf("========================================\n");
        printf("Voce Nao Pode Requerer a Aposentadoria \n");
        printf("----------------------------------------\n");
        printf("========================================\n");
    }

    return 0;
}
