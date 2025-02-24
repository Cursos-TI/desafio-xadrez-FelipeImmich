#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    int movBispo = 5, movTorre = 5, movRainha = 8; // Variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i = 0;  // Variavel para o while e o do-while

    // Implementação de Movimentação do Bispo
    // Utilizado o for para simular a movimentação do Bispo em diagonal.
    puts("Movimentando Bispo para a diagonal superior direita");
    for (int i = 0; i < movBispo; i++)
    {
        printf("> %d° movimento:\n", i+1);
        puts("      Cima");
        puts("      Direita");
    };
    
    // Implementação de Movimentação da Torre
    // utilizado o while para simular a movimentação da Torre para a direita.
    puts("=============================================");
    puts("Movimentando torre para a direita");
    i = 0; // Zerando a variavel para nao ocorrer erros no while
    while (i < movBispo)
    {
        printf("> %d° movimento:\n", i+1);
        puts("      Direita");
        i++;
    };
    
    // Implementação de Movimentação da Rainha
    // utilizado o do-while para simular a movimentação da Rainha para a esquerda.
    puts("=============================================");
    puts("Movimentando rainha para a esquerda");
    i = 0; // Zerando a variavel para nao ocorrer erros no do-while
    do{
        printf("> %d° movimento:\n", i+1);
        puts("      Esquerda");
        i++;
    }while(i < movRainha);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
