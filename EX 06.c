#include <stdio.h>
#include <stdlib.h>

int main()
{

    int soma, produto, primeiroValor, segundoValor;
    float media;

    printf("Digite o Primeira valor: ");
    scanf("%d", &primeiroValor);
    printf("--------------------------------\n");

    printf("Digite o Segundo valor ");
    scanf("%d", &segundoValor);
    printf("--------------------------------\n");

    media = (primeiroValor + segundoValor) / 2;
    soma = primeiroValor + segundoValor;
    produto = primeiroValor * segundoValor;

    printf("A media do valor e: %.1f \n", media);
    printf("--------------------------------\n");
    printf("A Soma do valor e: %d \n", soma);
    printf("--------------------------------\n");
    printf("O valor do Produto e: %d \n", produto);
    printf("--------------------------------\n");

    if (primeiroValor > segundoValor)
    {
        printf("O Maior valor e: %d \n", primeiroValor);
        printf("--------------------------------\n");
        printf("O Menor valor e: %d \n", segundoValor);
        printf("--------------------------------\n");
        printf("================================\n");
    }
    else if (segundoValor > primeiroValor)
    {
        printf("O Maior valor e: %d \n", segundoValor);
        printf("--------------------------------\n");
        printf("O Menor valor e: %d \n", primeiroValor);
        printf("--------------------------------\n");
        printf("================================\n");
    }
    else if (primeiroValor == segundoValor)
    {
        printf("Os valor digitados sao iguais\n");
        printf("--------------------------------\n");
        printf("--------------------------------\n");
        printf("PrimeiroValor: %d \n", primeiroValor);
        printf("--------------------------------\n");
        printf("SegundoValor: %d \n", segundoValor);
        printf("--------------------------------\n");
        printf("================================\n");
    }

    return 0;
}
