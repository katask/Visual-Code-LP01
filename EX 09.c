#include <stdio.h>
#include <stdlib.h>

int main()
{

    int primeiroNumero, segundoNumero, terceironumero;

    printf("Digite o Primeiro Numero: ");
    scanf("%d", &primeiroNumero);
    printf("------------------------------------\n");

    printf("Digite o Segundo Numero: ");
    scanf("%d", &segundoNumero);
    printf("------------------------------------\n");

    printf("Digite o Terceiro Numero: ");
    scanf("%d", &terceironumero);
    printf("------------------------------------\n");
    printf("====================================\n");
    printf("------------------------------------\n");

    printf("O Primeiro Numero e: %d \n", primeiroNumero);
    printf("------------------------------------\n");
    printf("O Segundo Numero e: %d \n", segundoNumero);
    printf("------------------------------------\n");

    printf("O Terceiro Numero e: %d \n", terceironumero);
printf("------------------------------------\n");

    if (primeiroNumero > segundoNumero && primeiroNumero > terceironumero)
    {
        printf("O Maior Numero e: %d \n", primeiroNumero);
        printf("------------------------------------\n");
    }
    else if (segundoNumero > primeiroNumero && segundoNumero > terceironumero)
    {

        printf("O Maior Numero e: %d \n", segundoNumero);
        printf("------------------------------------\n");
    }
    else
    {

        printf("O Maior Numero e: %d \n", terceironumero);
        printf("------------------------------------\n");
    }
    if (primeiroNumero < segundoNumero && primeiroNumero < terceironumero)
    {
        printf("O Menor Numero e: %d \n", primeiroNumero);
        printf("------------------------------------\n");
    }
    else if (segundoNumero < primeiroNumero && segundoNumero < terceironumero)
    {

        printf("O Menor Numero e: %d \n", segundoNumero);
        printf("------------------------------------\n");
    }
    else
    {

        printf("O Maior Numero e: %d \n", terceironumero);
        printf("------------------------------------\n");
    }


//outra opção
 //maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
 //maior = maior > terceironumero ? maior : terceironumero;

 //menor = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
 //menor = menor > terceironumero ? menor : terceironumero;


}
