/*Escreva um programa em C que solicite ao usuário um número inteiro e utilize uma função chamada parImpar 
para verificar se o número é par ou ímpar. A função parImpar deve receber um parâmetro inteiro (o número inserido pelo usuário) 
e exibir uma mensagem indicando se o número é par ou ímpar*/

#include <stdio.h>
#include <stdlib.h>

void parImpar(int num){
    if(num%2 != 0){
        printf("O numero %d eh impar", num);
    }else{
        printf("O numero %d eh par", num);
    }

}

int main()
{
    int num;

    printf("Digite um numero para ver se ele eh par ou impar: ");
    scanf("%d", &num);

    parImpar(num);

    return 0;
}
