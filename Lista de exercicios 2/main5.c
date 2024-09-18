// 5. Escreva um programa que receba a idade e o peso de 15 pessoas. 
// O seu programa deve calcular e mostrar as médias dos pesos das pessoas da mesma faixa etária. 
// As faixas etárias são: de 1 a 10 anos, de 11 a 20, de 21 a 30 anos e maiores de 31 anos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, idade, contFaixa1 = 0, contFaixa2 = 0, contFaixa3 = 0, contFaixa4 = 0;
    float peso, mediaFaixa1 = 0, mediaFaixa2 = 0, mediaFaixa3 = 0, mediaFaixa4 = 0;

    while(i <= 15){
        printf("Pessoa %d\n", i);
        printf("Digite a idade em anos: ");
        scanf("%d", &idade);
        printf("Digite o peso em kg: ");
        scanf("%f", &peso);
        i++;
        if(idade >= 1 && idade <= 10){
            mediaFaixa1 += peso;
            contFaixa1++;
        }else if(idade >= 11 && idade <= 20){
            mediaFaixa2 += peso;
            contFaixa2++;
        }else if(idade >= 21 && idade <= 30){
            mediaFaixa3 += peso;
            contFaixa3++;
        }else{
            mediaFaixa4 += peso;
            contFaixa4++;
        }
    }

    if(contFaixa1 > 0){
        printf("Media dos pesos de 1 a 10 anos eh %0.2f\n", mediaFaixa1 / contFaixa1);
    }

     if(contFaixa2 > 0){
        printf("Media dos pesos de 11 a 20 anos eh %0.2f\n", mediaFaixa2 / contFaixa2);
    }

     if(contFaixa3 > 0){
        printf("Media dos pesos de 21 a 30 anos eh %0.2f\n", mediaFaixa3 / contFaixa3);
    }

     if(contFaixa4 > 0){
        printf("Media dos pesos de 30 anos ou mais eh %0.2f\n", mediaFaixa4 / contFaixa4);
    }

    return 0;
}
