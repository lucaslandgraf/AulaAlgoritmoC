#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tente descobrir o valor do sistema \n");

    int numero, meu_numero;
    meu_numero = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(meu_numero == numero){
        printf("Os numeros sao iguais \n");
    }
    printf("O sistema terminou. O valor era %d \n", meu_numero);
    return 0;
}
