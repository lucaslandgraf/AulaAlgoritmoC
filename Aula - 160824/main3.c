#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    int res;


    printf("Escreva um valor inteiro: ");
    scanf("%d", &num);
    res = num += 1;
    //num = num + 1; // solução 1
    //num +=1; // // solução 2
    //num++; // Solução 3
    printf("O seu numero +1 vale %d", res);
    return 0;
}