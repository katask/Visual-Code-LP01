#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade;

    printf("Digite sua Idade: ");
    scanf("%d", &idade);
    printf("------------------------------\n");

    if (idade >= 65)
    {

        printf("==============================\n");
        printf("Voce nao e obrigado a votar \n");
        printf("------------------------------\n");
        printf("==============================\n");
    }
    else if (idade < 18)
    {

        printf("==============================\n");
        printf("Voce nao e obrigado a votar \n");
        printf("------------------------------\n");
        printf("==============================\n");
    }
    else
    {
        printf("==============================\n");
        printf("Voce e obrigado a votar \n");
        printf("------------------------------\n");
        printf("==============================\n");
    }

    return 0;
}