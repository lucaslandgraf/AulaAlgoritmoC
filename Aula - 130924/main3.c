// Escreva um programa que receba um número inteiro do usuário, calcule e escreva a tabuada deste número utilizando uma estrutura de repetição.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int conta, num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++){
        conta = pow(num, 1) * i;
        printf("%d \t", conta);
    }

    return 0;
}