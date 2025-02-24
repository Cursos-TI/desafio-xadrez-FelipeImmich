#include <stdio.h>

// Variáveis globais que representam o número de casas que cada peça pode se mover
int movBispo = 5, movTorre = 5, movRainha = 8, movVertCavalo = 2, movHorzCavalo = 1;

// Função para limpar o buffer de entrada
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Lê e descarta todos os caracteres até encontrar '\n' ou EOF
}

// Função recursiva para simular o movimento do bispo
int MovimentoBispo(int casas) {
    if (casas > 0) {
        MovimentoBispo(casas - 1); // Chamada recursiva para simular o movimento
        printf("> %d° movimento:\n", casas);
        puts("      Cima");
        puts("      Direita");
    };
}

// Função para simular o movimento do bispo usando loops aninhados
int MovimentoBispoLoopAninhado(int casas) {
    int quant = 1;
    while (casas > 0) {
        printf("> %d° movimento:\n", quant);
        puts("      Cima");
        while (casas > 0) {
            puts("      Direita");
            break; // Interrompe o loop interno após imprimir "Direita"
        }
        casas--;
        quant++;
    }
}

// Função recursiva para simular o movimento da torre
int MovimentoTorre(int casas) {
    if (casas > 0) {
        MovimentoTorre(casas - 1); // Chamada recursiva para simular o movimento
        printf("> %d° movimento:\n", casas);
        puts("      Direita");
    }
}

// Função recursiva para simular o movimento da rainha
int MovimentoRainha(int casas) {
    if (casas > 0) {
        MovimentoRainha(casas - 1); // Chamada recursiva para simular o movimento
        printf("> %d° movimento:\n", casas);
        puts("      Esquerda");
    }
}

// Função para simular o movimento do cavalo
int MovimentoCavalo(int casasv, int casash) {
    for (casash, casasv; casasv > 0 || casash > 0;) {
        if (casasv > 0) {
            casasv--;
            puts("      Cima");
        } else {
            casash--;
            puts("      Direita");
        }
    }
}

// Função principal
int main() {
    int opcao;
    printf("============= Menu =============\n");
    printf("[1] Bispo\n");
    printf("[2] Torre\n");
    printf("[3] Rainha\n");
    printf("[4] Cavalo\n");
    printf("[5] Bispo Loop aninhado\n");
    printf("[6] Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            puts("=============================================");
            printf("Movimentando Bispo para a diagonal superior direita %d casas\n", movBispo);
            MovimentoBispo(movBispo); // Chama a função para mover o bispo
            opcao = main(); // Volta ao menu principal
            break;

        case 2:
            puts("=============================================");
            printf("Movimentando torre para a direita %d casas\n", movTorre);
            MovimentoTorre(movTorre); // Chama a função para mover a torre
            opcao = main(); // Volta ao menu principal
            break;

        case 3:
            puts("=============================================");
            printf("Movimentando rainha para a esquerda %d casas\n", movRainha);
            MovimentoRainha(movRainha); // Chama a função para mover a rainha
            opcao = main(); // Volta ao menu principal
            break;

        case 4:
            puts("=============================================");
            printf("Movimentando cavalo cima %d casas e direita %d casas\n", movVertCavalo, movHorzCavalo);
            MovimentoCavalo(movVertCavalo, movHorzCavalo); // Chama a função para mover o cavalo
            opcao = main(); // Volta ao menu principal
            break;

        case 5:
            puts("=============================================");
            printf("Movimentando Bispo para a diagonal superior direita %d casas\n", movBispo);
            MovimentoBispoLoopAninhado(movBispo); // Chama a função para mover o bispo usando loops aninhados
            opcao = main(); // Volta ao menu principal
            break;

        case 6:
            puts("=-=-=-=-= Saindo =-=-=-=-=");
            break; // Encerra o programa

        default:
            printf("******** Opcao Invalida! ********\nTente novamente!\n\n");
            limparBuffer(); // Limpa o buffer de entrada
            main(); // Volta ao menu principal
            break;
    }
    return 0;
}