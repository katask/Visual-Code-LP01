#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;

printf("===========================\n");
    printf("Digite um Numero: ");
    scanf("%i", &numero);
    printf("\n");
    printf("---------------------------\n");
    printf("===========================\n");
    if (numero % 2 == 0)
    {
        printf("---------------------------\n");
        printf("Numero digitado e PAR!\n");
        printf("---------------------------\n");
        printf("===========================\n");
    }
    else if (numero % 2 == 1)

    {
        printf("---------------------------\n");
        printf("Numero digitado e IMPAR!\n");
        printf("---------------------------\n");
        printf("===========================\n");
    }

    return 0;
}
