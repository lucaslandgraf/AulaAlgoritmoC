//Escreva um algoritmo que recebe a senha (número inteiro) do usuário. 
//Se a senha for igual a 1786, o algoritmo deve escrever “Bom dia! Seja bem-vindo!”. 
//Caso contrário, o algoritmo deve imprimir a mensagem “Acesso negado! Senha inválida”. 
//Além disso, o algoritmo deve ser desenvolvido de modo a permitir ao usuário apenas 3 tentativas.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i = 1, erros = 3;

    while(i <= 3){
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        if(num == 1786){
            printf("Bom dia! Seja bem vindo!\n");
            break;
        }else if(num != 1786){
            erros--;
            printf("Acesso negado! Senha invalida.\n");
            printf("Voce tem %d tentativas \n", erros); 
        }
        i++;
    }
    return 0;
}
