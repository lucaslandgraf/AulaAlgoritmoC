/* exercicio 3 Deseja-se publicar o número de acertos de cada aluno em uma prova objetiva. 
A prova consta de 10 questões, cada uma com cinco alternativas identificadas por A, B, C, D e E. 
Para isso, você deve escrever um algoritmo que armazena em um vetor o gabarito da prova, composto de 10 questões. 
Logo após, o seu algoritmo deve perguntar a quantidade de provas a serem corridas. 
Por fim, para cada prova, o seu algoritmo deve receber as respostas e verificar a quantidade de acertos */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gabarito[10];
    int qtd, c;
    int cont = 1, gab = 1;

    for(int i = 0; i < 10; i++){
    printf("Digite o gabarito da prova(letra), questao - %d/10: ", cont);
    scanf(" %c", &gabarito[i]);
    cont++;
    }

    printf("Informe quantas provas serao corrigidas: ");
    scanf("%d", &qtd);

    char prova[qtd][10];
    cont = 1;

    for(int i = 0; i < qtd; i++){
        c = 0;
        for(int j = 0; j < 10; j++){
        printf("Digite as respostas da prova %d - questao %d: ", cont, gab);
        gab++;
            if(j < 10){
                scanf(" %c", &prova[i][j]);
            }
            if(gabarito[j] == prova[i][j]) {
                c++;
            }
        }
        cont++;
        gab = 1;
        printf("Total acertos %d\n", c);
    }


    return 0;
}
