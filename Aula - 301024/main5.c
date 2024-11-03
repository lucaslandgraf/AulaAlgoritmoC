/* Escreva um programa em C que solicite ao usuário dois números inteiros e utilize uma função chamada minhaFuncao para calcular
e exibir a soma desses números. A função minhaFuncao deve receber dois parâmetros inteiros (os números inseridos pelo usuário) 
e exibir diretamente o resultado da soma.*/

#include <stdio.h>
#include <stdlib.h>

//Declaracao da funcao
void minhaFuncao(int n1, int n2){
    printf("resultado: %d", (n1 + n2));
}

int main()
{
    int n1, n2;

    printf("Digite n1: ");
    scanf("%d", &n1);
    printf("Digite n2: ");
    scanf("%d", &n2);

    minhaFuncao(n1, n2);

    return 0;
}
