//Escrever um algoritmo que recebe um número inteiro positivo do usuário 
//e escreve todos os valores da série de Fibonacci, desde 1 até o valor lido.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limite, n1 = 1, n2 = 1, soma;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &limite);

    if(limite < 0){
        printf("Numero invalido");
    }

    while(n1 <= limite){
        printf("%d - ", n1);
        soma = n1 + n2;
        n1 = n2;
        n2 = soma;
    }

    return 0;
}
