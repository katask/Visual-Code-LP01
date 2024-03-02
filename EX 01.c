#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nome[250];
    float primeiraNota;
    float segundaNota;
    float media;

    printf("Nome: ");
    gets(nome);

    printf("Primeira nota: ");
    scanf("%d", &primeiraNota);

    printf("Segunda nota: ");
    scanf("%d", &segundaNota);

    media = (primeiraNota + segundaNota) / 2;

    // Exibir para o usuario

    printf("========================================");
    printf("----------------------------------------");
    printf("Nome: %c \n", nome);
    printf("----------------------------------------");
    printf("Primeira Nota: %.2f \n", primeiraNota);
    printf("----------------------------------------");
    printf("Segunda Nota: %.2f \n", segundaNota);
    printf("----------------------------------------");
    printf("Media do Aluno: %.2f \n", media);
    printf("----------------------------------------");
    printf("========================================");

    // situação do aluno

    if (media >= 7)
        ;
    {
        printf("Aprovado!");
    }
    else
    {
        printf("Reprovado!");
    }

    return 0;
}
