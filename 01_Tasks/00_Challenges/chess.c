#include <stdio.h>

int main() {
    int mainMenu = 0, playerChoice = 0, queenPosition = 0, bishopPosition = 0, towerPosition = 0, horsePosition = 1, move1 = 0, move2 = 0;
    
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

        while (mainMenu != 4) {        
            printf("Escolha uma PEÇA do tabuleiro:\n");
            printf("(1) ♛ RAINHA\n");
            printf("(2) ♝ BISPO\n");
            printf("(3) ♜ TORRE\n");
            printf("(4) ♞ CAVALO\n");
            printf("\n");
            printf("Outras opções:\n");
            printf("(5) Voltar ao MENU INICIAL\n");
            printf("(6) Encerrar o jogo.\n");
            printf("\n");
            printf("Escolha uma opção: ");
                scanf("%d", &mainMenu);
            printf("\n");

            switch (mainMenu) {
                case 1:
                    printf("Você escolheu ♛ RAINHA.\n");
                    printf("\n");
                    printf("Movimento disponíveis:\n");
                        printf("(1) 8 CASAS PARA A ESQUERDA\n");
                        printf("\n");
                        printf("Escolha uma opção: ");
                            scanf("%d", &playerChoice);
                        printf("\n");

                        // Opção de estrutura de repetição utilizando WHILE
                        while (queenPosition < 8) {
                            queenPosition++;
                            printf("A RAINHA se movimentou: %d casas para a ESQUERDA\n", queenPosition);
                        }
                        printf("A posição atual da RAINHA ♕ é: %d casas para a ESQUERDA\n", queenPosition);  

                    break;
                case 2:
                    printf("Você escolheu ♝ BISPO.\n");
                    printf("\n");
                    printf("Movimento disponíveis:\n");
                        printf("(1) 5 CASAS NA DIAGONAL PARA CIMA E A DIREITA\n");
                        printf("\n");
                        printf("Escolha uma opção: ");
                            scanf("%d", &playerChoice);
                        printf("\n");
                        
                        // Opção de estrutura de repetição utilizando DO WHILE
                        do {
                            bishopPosition++;
                            printf("O BISPO se movimentou: %d casas na DIAGONAL PARA CIMA E A DIREITA\n", bishopPosition);
                        } while (bishopPosition < 5);
                        printf("A posição atual do BISPO ♗ é: %d casas na DIAGONAL PARA CIMA E A DIREITA\n", bishopPosition);

                    break;
                case 3:
                    printf("Você escolheu ♜ TORRE.\n");
                    printf("\n");
                    printf("Movimento disponíveis:\n");
                        printf("(1) 5 CASAS PARA A DIREITA\n");
                        printf("\n");
                        printf("Escolha uma opção: ");
                            scanf("%d", &playerChoice);
                        printf("\n");

                        // Opção de estrutura de repetição utilizando FOR
                        for (towerPosition = 1; towerPosition < 5; towerPosition++) {
                        printf("A TORRE se movimentou: %d casas para a DIREITA\n", towerPosition);
                        }
                        printf("A posição atual da TORRE ♖ é: %d casas a DIREITA\n", towerPosition);

                    break;
                case 4:
                    printf("Você escolheu ♞ CAVALO.\n");
                    printf("\n");
                    printf("Movimento disponíveis:\n");
                        printf("(1) 2 CASAS PARA BAIXO E 1 CASA PARA A ESQUERDA\n");
                        printf("\n");
                        printf("Escolha uma opção: ");
                            scanf("%d", &playerChoice);
                        printf("\n");

                        // Opção de estrutura de repetição aninhada utilizando WHILE + FOR
                        while (horsePosition--) {
                            horsePosition = 0;
                            move2 = 0;                        
                            for (move1 = 0; move1 <= 1; move1++) {
                                printf("O CAVALO se movimentou: %d casas para BAIXO\n", move1 + 1);
                            }
                            move2++;                            
                            printf("O CAVALO se movimentou: %d casa para ESQUERDA\n", move2);
                        }
                        printf("A posição atual do CAVALO ♘ é: %d casas para BAIXO e %d casa para ESQUERDA\n", move1, move2);

                    break;
                case 5:
                    printf("Voltando ao MENU INICIAL...\n");
                    break;
                case 6:
                    printf("Saindo do jogo... Até a próxima!\n");
                    printf("Pressione ENTER para sair.\n");
                    getchar();
                    getchar();
                    return 0;
                default:
                    printf("Opção inválida, tente novamente...\n");
                    continue;
            }
            printf("\n");
        }
    }
    return 0; 
}