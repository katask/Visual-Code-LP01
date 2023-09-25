#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Declarando variáveis.

    int idade = 20;           // Inteiro
    float peso = 89.2;        // Real
    char sexo = 'F';          // apenas um caracter
    char nome[250] = "Marta"; // uma cadeia de caracteres
    char sobrenome[250] = "Gaspar";
    float altura = 1.72;

    // exibindo dados para o usuario

    printf("Idade: %d   Anos  \n", idade);
    printf("================================= \n");
    printf("Peso:  %.2f Kg    \n", peso);
    printf("================================= \n");
    printf("Sexo:  %c         \n", sexo);
    printf("================================= \n");
    printf("Nome:  %s         \n", nome);
    printf("================================= \n");
    printf("Altura:  %.2f      \n", altura);
    printf("================================= \n");
    printf("Sobrenome:  %s      \n", sobrenome);

    return 0;
}