// 3. Escreva um programa que receba do usuário 2 valores inteiros e positivos: X e Y.
// O seu programa deve calcular e escrever o valor da função potência XY utilizando
// um laço de repetição (ou seja, sem utilizar a função pow).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y;
    int resultado = 1;
    int contador = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &X);
    printf("Digite outro numero inteiro positivo: ");
    scanf("%d", &Y);

    if(X < 0 || Y < 0){
        printf("Os numeros devem ser inteiros e positivos");
        return 1;
    }

    while(contador < Y){
        resultado *= X;
        contador++;
    }

    printf("A funcao potencia de %d elevado a %d fica %d", X, Y, resultado);

    return 0;
}
