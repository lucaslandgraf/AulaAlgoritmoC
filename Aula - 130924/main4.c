// Escrever um algoritmo que recebe do usuário um número inteiro positivo e que escreve todos os números múltiplos de 3, desde 0 até o valor lido.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++){
        if(i % 3 == 0){
        printf("%d \t", i);
    }
}
    return 0;
}
