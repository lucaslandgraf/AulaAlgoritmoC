/*Escreva um programa que leia o número de lados de um polígono regular e a medida do lado (em cm). Crie uma função que receba como parâmetros o número de lados e a medida dos lados do polígono, e a função deve calcular e imprimir:

Se o número de lados for igual a 3, escrever "TRIÂNGULO" e o valor do seu perímetro;
Se o número de lados for igual a 4, escrever "QUADRADO" e o valor da sua área;
Se o número de lados for igual a 5, escrever "PENTÁGONO".
Observação: O usuário só pode informar os valores 3, 4 ou 5 para o número de lados. Valide essa entrada. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Funcao para calcular e exibir informacoes do poligono
void poli(int lado, int med) {
    if (lado < 3 || lado > 5) {
        printf("Voce so pode informar os lados 3, 4 ou 5.\n");
        printf("O numero %d e invalido.\n", lado);
        return; // Finaliza a execucao da funcao
    }

    int p = lado * med; // Calcula o perimetro
    int a = med * med;  // Calcula a area para quadrado

    if (lado == 3) {
        printf("TRIANGULO\n");
        printf("O valor do perimetro do TRIANGULO e %d\n", p);
    } else if (lado == 4) {
        printf("QUADRADO\n");
        printf("O valor da area do QUADRADO e %d\n", a);
    } else if (lado == 5) {
        printf("PENTAGONO\n");
    }
}

int main() {
    int lado, med;

    printf("Quantos lados tem o poligono (3, 4 ou 5)? ");
    scanf("%d", &lado);

    // Valida o numero de lados
    while (lado < 3 || lado > 5) {
        printf("Voce so pode informar os lados 3, 4 ou 5.\n");
        printf("Quantos lados tem o poligono: ");
        scanf("%d", &lado);
    }

    printf("Qual e a medida dos lados? ");
    scanf("%d", &med);

    // Chama a funcao para processar e exibir os dados
    poli(lado, med);

    return 0;
}
