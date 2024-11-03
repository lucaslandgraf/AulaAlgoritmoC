/* Crie um programa em C que contenha uma função chamada minhaFuncao, sem parâmetros e sem retorno, 
que exiba uma mensagem informando que ela foi executada. No corpo da função principal (main), 
o programa deve exibir uma mensagem inicial, chamar minhaFuncao para exibir sua mensagem, e finalizar a execução*/

#include <stdio.h>
#include <stdlib.h>

/*
    exemplo de função sem retorno e sem parametro

*/


//Declaracao da funcao
void minhaFuncao(){
    printf("Executou a funcao minhaFuncao \n");
}


int main()
{
    printf("Ola! Executando a main \n");
    minhaFuncao();

    return 0;
}
