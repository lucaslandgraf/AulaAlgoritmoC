// 4. Escreva um algoritmo que exiba uma mensagem com as opções "1-multiplicar","2-somar", "3- Subtrair", "4-Dividir", "5-Sair". 
// O seu programa deve ler a opção desejada (1, 2, 3, 4), solicitar ao usuário que informe dois valores, executar a operação 
// escolhida e exibir o resultado. O programa deve ficar repetindo a execução (ou seja, exibição das opções, leitura doa valores 
// e exibição do resultado), até que seja escolhida a opção sair.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float num1, num2, resultado;

    do{
     printf("Escolha uma operacao:\n");
     printf("1 - Multiplicar\n");
     printf("2 - Somar\n");
     printf("3 - Subtrair\n");
     printf("4 - Dividir\n");
     printf("5 - Sair\n");
     printf("Digite a sua opcao: ");
     scanf("%d", &opcao);

     if(opcao == 5){
        printf("Saindo...\n");
        break;
    }


    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    switch(opcao){
case(1):
    resultado = num1 * num2;
    printf("O resultado da multiplicacao eh %0.2f\n", resultado);
    break;
case(2):
    resultado = num1 + num2;
    printf("O resultado da soma eh %0.2f\n", resultado);
    break;
case(3):
    resultado = num1 - num2;
    printf("O resultado da subtracao eh %0.2f\n", resultado);
    break;
case(4):
    resultado = num1 / num2;
    printf("O resultado da divisao eh %0.2f\n", resultado);
    break;
    }

}while(opcao != 5);

    return 0;
}
