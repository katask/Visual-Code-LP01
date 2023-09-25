#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declarando variaveis

    int idade;
    float peso;

    // solicidando dados do usuario.

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    // limpa tela(limpa o terminal)
    system("cls");

    // exibindo dados do usuario

    printf("Idade: %d \n", idade );
    printf("Peso: %.2f \n", peso);

    return 0;
}