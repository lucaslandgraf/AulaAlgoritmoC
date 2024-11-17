#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct jogador {
    char nome[50];
    int tentativas;
};

void jogo() {
    int iniciar, palpite, num_secreto;
    struct jogador a1;
    a1.tentativas = 0;

    // Gera o número secreto
    srand(time(NULL));
    num_secreto = (rand() % 100) + 1;

    do {
        printf("\nEscolha uma opcao (1 - Iniciar o Jogo, 2 - Instrucoes, 3 - Sair): ");
        scanf("%d", &iniciar);

        switch (iniciar) {
        case 1:
            printf("Digite o seu nome: ");
            scanf(" %[^\n]", a1.nome);
            printf("Nome registrado: %s\n", a1.nome);

            do {
                printf("Escolha um numero inteiro de 1 a 100 (ou 0 para sair): ");
                scanf("%d", &palpite);

                if (palpite == 0) {
                    printf("Voce saiu do jogo. O numero secreto era %d.\n", num_secreto);
                    return;
                }

                a1.tentativas++;

                if (palpite < num_secreto) {
                    printf("Eh um numero mais alto\n");
                } else if (palpite > num_secreto) {
                    printf("Eh um numero mais baixo\n");
                } else {
                    printf("ACERTOU! O numero era %d. Voce precisou de %d tentativas.\n",
                           num_secreto, a1.tentativas);
                    return;
                }
            } while (1);

        case 2:
            printf("Nesse jogo, o computador escolhe um numero aleatorio entre 1 e 100.\n");
            printf("Seu objetivo e adivinhar o numero usando o menor numero de tentativas.\n");
            printf("Voce pode sair digitando 0 a qualquer momento.\n");
            break;

        case 3:
            printf("Saindo do jogo. Ate a proxima!\n");
            return;

        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (1);
}

int main() {
    jogo();
    return 0;
}
