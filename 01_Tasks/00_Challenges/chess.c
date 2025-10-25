#include <stdio.h>

int main() {
    int mainMenu = 0, playerChoice = 0, towerPosition = 0;
    
    printf("### Chess Simulator ###\n");
        printf("\n");

    while (mainMenu != 1) {
        printf("MENU INICIAL:\n");
        printf("(1) Iniciar o jogo\n");
        printf("(2) Sair\n");
        printf("\n");
        printf("Escolha uma opção: ");
            scanf("%d", &mainMenu);
        printf("\n");

        switch (mainMenu) {
            case 1:
                printf("Iniciando o jogo...\n");
                    printf("\n");
                break;
            case 2:
                printf("Saindo do jogo... Até a próxima!\n");
                    printf("Pressione ENTER para sair.\n");
                    getchar();
                    getchar();
                return 0;
            default:
                printf("Opção inválida, tente novamente...\n");
                continue;
        }

        printf("Escolha uma PEÇA do tabuleiro:\n");
        printf("(1) RAINHA\n");
        printf("(2) BISPO\n");
        printf("(3) TORRE\n");
        printf("\n");
        printf("Opção: ");
            scanf("%d", &mainMenu);

        switch (mainMenu) {
            case 1:
                printf("Você escolheu RAINHA.\n");
                printf("Escolha as opções de movimento disponíveis:\n");
                    printf("(1) 8 CASAS PARA A ESQUERDA\n");
                    printf("Opção: ");
                        scanf("%d", &playerChoice);
                break;
            case 2:
                printf("Você escolheu BISPO.\n");
                printf("Escolha as opções de movimento disponíveis:\n");
                    printf("(1) 5 CASAS NA DIAGONAL PARA CIMA E A DIREITA\n");
                    printf("Opção: ");
                        scanf("%d", &playerChoice);
                break;
            case 3:
                printf("Você escolheu TORRE.\n");
                printf("Escolha as opções de movimento disponíveis:\n");
                    printf("(1) 5 CASAS PARA A DIREITA\n");
                    printf("Opção: ");
                        scanf("%d", &playerChoice);
                    for (towerPosition = 1; towerPosition < 5; towerPosition++) {
                    printf("A TORRE se movimentou: %d casas para a DIREITA\n", towerPosition);
                    }
                    printf("A posição da TORRE é: %d casas para a DIREITA\n", towerPosition);
                break;
            default:
                printf("Opção inválida, tente novamente...\n");
                continue;
        }
        printf("\n");
        
    }
    return 0; 
}