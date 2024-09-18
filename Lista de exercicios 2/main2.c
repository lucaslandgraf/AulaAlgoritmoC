// 2. Escreva um programa que receba do usuário 10 valores inteiros e positivos e:
// a. Encontre e imprima o maior valor;
// b. Encontre e imprima o menor valor;
// c. Calcule a média dos números lidos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i;
    int maior, menor;
    float soma = 0, media;

    printf("Digite 10 numeros inteiros positivos\n");

    for(i = 1; i <= 10; i++){
        do{
            printf("Numero %d: ", i);
            scanf("%d", &numero);

        if(numero <= 0){
        printf("O numero deve ser positivo");

        }
}while(numero <= 0);

if(i == 1){
    maior = menor = numero;
}

if(numero > maior){
    maior = numero;
}

if(numero < menor){
    menor = numero;
  }

  soma += numero;
}

media = soma / 10;

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}
