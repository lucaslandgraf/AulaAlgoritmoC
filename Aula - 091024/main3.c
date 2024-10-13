// Escreva um algoritmo em C que cria um vetor chamado cat_desconto com 10 posições, 
// já preenchido com valores inteiros que representam descontos de diferentes categorias. 
// O programa deve imprimir o valor do desconto correspondente à categoria de índice 5

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cat_desconto[10] = {5,2,7,10,7,6,3,2,1,9};

    printf("desconto da categoria 5: %d \n", cat_desconto[5]); // puxa um unico valor
    return 0;
}