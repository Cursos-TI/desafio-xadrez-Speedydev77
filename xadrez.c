#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int torre = 1, bispo, rainha = 8;

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    printf("\nBispo ][\n");
    for (bispo = 1; bispo <= 5; bispo++) //inicializa com um valor; condiciona "true" ou "false" e continua enquanto for "true"; incrementa ++ até a condição ser "false";
    {
        printf("Cima ^\n");
        printf("Direita =>\n");
    }
    printf("\n");

    printf("\nTorre ][ \n");

    while (torre <= 5) //condiciona a execução do bloco de código enquanto valor for "true";
    {
        printf("Direita =>\n");
        torre++; //incrementa uma unidade a cada execução do bloco de código até se tornar "false";
    }
    printf("\n");

    printf("\nRainha ][ \n");

    do 
    {
        //inicializa com um valor "true" para a condição;
        printf("<= Esquerda\n");
        rainha--;

    } while (rainha >= 1); //Enquanto o valor for "true" e maior ou igual a 1, a peça continará se movendo até se tornar "false";


    return 0;
}
