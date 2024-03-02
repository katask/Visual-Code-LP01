#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nome[500];
    int idade;
    float primeiraNota;
    float segundaNota;
    float terceiraNota;
    float media;

    printf("Digite seu Nome: ");
    gets(nome);
    printf("\n");

    printf("Digite sua Idade: ");
    scanf("%i", &idade);
    printf("\n");

    printf("Digite sua Primeira Nota: ");
    scanf("%f", &primeiraNota);
    printf("\n");

    printf("Digite sua Segunda Nota: ");
    scanf("%f", &segundaNota);
    printf("\n");

    printf("Digite sua Terceira Nota: ");
    scanf("%f", &terceiraNota);
    printf("\n");

    media = (primeiraNota + segundaNota + terceiraNota) / 3;

    printf("====================================\n");
    printf("------------------------------------\n");
    printf("Nome: %c \n", nome);
    printf("------------------------------------\n");
    printf("Idade: %i \n", idade);
    printf("------------------------------------\n");
    printf("Media do Aluno: %.2f \n", media);
    printf("------------------------------------\n");
    

    if (media >= 7)
    {
        printf("APROVADO! \n");
        printf("------------------------------------\n");
        printf("====================================\n");
    
    }
    else
    {
        printf("REPORVADO! \n");
        printf("------------------------------------\n");
        printf("====================================\n");
    }

    return 0;
}
