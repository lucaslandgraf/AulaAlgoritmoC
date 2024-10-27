// Desenvolva um programa em C que leia duas palavras ou frases de até 20 caracteres digitadas pelo usuário. 
// O programa deve utilizar a função strcmp para comparar as duas strings.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char string1[20], string2[20];

    printf("Digite uma palavra comparativa: ");
    gets(string1);

    printf("Digite outra palavra comparativa: ");
    gets(string2);

    int strcmp_result = strcmp(string1, string2);
    printf("O retorno de strcmp eh \n", strcmp_result);

    if(strcmp_result == 0){
        printf("Iguais \n");
    }else{
        printf("Diferentes \n");
    }

    return 0;
}
