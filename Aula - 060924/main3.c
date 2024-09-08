#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;

    printf("Digite um numero inteiro maior que 0: ");
    scanf("%d", &num);

    if(num > 0){
       i = num;
       while(i >= 1){
        printf("%d \n", i);
        i--;
    }
        }else{
        printf("O numero deve ser maior que 0");
        }

    return 0;
}
