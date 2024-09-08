#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;

    printf("Digite um numero inteiro maior que 0: ");
    scanf("%d", &num);

    if(num > 0){
       i = 1;
       while(i <= num){
        printf("%d \n", i);
        i++;
    }
}else{
    printf("O numero informado eh menor ou igual a 0");
}

    return 0;
}
