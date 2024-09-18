// 6. Escreva um programa que receba valores inteiros o usuário até que o valor -99 seja digitado. 
// Quando isso acontecer o programa deverá escrever a soma e a média dos valores recebidos anteriormente

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, somanum = 0, i = 0;
    float media;

    while(1){
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        if(num == -99){
            break;
        }
        somanum += num;
        i++;
    }

         if(i > 0) {
        media = (float)somanum / i;  // Calcula a média
        printf("A soma dos numeros apresentados eh %d\n", somanum);
        printf("A media dos numeros apresentados eh %0.2f\n", media);
    }else{
        printf("Nenhum numero valido foi inserido.\n");
    }

    printf("Encerrando...\n");
    return 0;
}
