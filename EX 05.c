#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char nomeSalvo[500] = "katakuri02";
    char senhaSalvo[500] = "katakuri001";
    char nome[500];
    char senha[500];

    printf("Digite seu Login: \n");
    gets(nome);

    printf("Digite sua Senha: \n");
    gets(senha);

    // strcmp

    if (strcmp(nome, nomeSalvo) == 0 && strcmp(senha, senhaSalvo) == 0)
    {
        printf("Bem vindo!");
    }
    else
    {

        printf("Acesso negado!");
    }

    return 0;
}