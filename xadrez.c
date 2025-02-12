#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    
void adiciona_torre(int torre){ //função recursiva para variável torre;
    if(torre <= 5 ){ //A condição if executa o bloco de código dentro da função recursiva;

        printf("Direita =>\n");
        
        adiciona_torre(torre + 1); //Repetição da função recursiva para a variável incrementar + 1;

    }

}

void adiciona_bispo(int bispo){ //função recursiva para variável bispo;
    if(bispo <= 5 ){ //A condição if executa o bloco de código dentro da função recursiva;

        printf("Cima ^ \n");
        printf("Direita =>\n");

        adiciona_bispo(bispo + 1); //Repetição da função recursiva para a variável incrementar + 1;

    }
        
}

void adiciona_rainha(int rainha){ //função recursiva para variável rainha;
    if(rainha <= 8){ //A condição if executa o bloco de código dentro da função recursiva;

        printf("<= Esquerda\n");
        
        adiciona_rainha(rainha + 1); //Repetição da função recursiva para a variável incrementar + 1;

    }
    
}

void adiciona_cavalo(int cavalo){ //função recursiva para variável cavalo;
    if(cavalo <= 2 ){ //A condição if executa o bloco de código dentro da função recursiva;

        printf("Cima ^ \n");
        printf("Cima ^ \n");
        printf("Cima ^ \n");
        printf("Direita =>\n");
        
        adiciona_cavalo(cavalo + 1); //Repetição da função recursiva para a variável incrementar + 1;

    }

}

int main() {

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
    
    int torre = 1, rainha = 1;


    //Utiliza loops aninhados e função recursiva;
    printf("Bispo ][\n");

    for (int bispo = 1; bispo <= 5; bispo++) //inicializa com um valor; condiciona "true" ou "false" e continua enquanto for "true"; incrementa ++ até a condição ser "false";
    {
        while(bispo <= 1){ //Bloco de código será executado ao mesmo tempo que chama a função void recursiva dentro da função principal (int main);
            
            adiciona_bispo(bispo); //O alinhamento entre o loop e a função void recursiva, repete a quatidade vezes que a peça se moverá;
            
            break;
        }
    }
    printf("\n");



    printf("Torre ][\n");

    while (torre <= 5) //condiciona a execução do bloco de código e ao mesmo tempo que chama a função void recursiva;
    {

        adiciona_torre(torre); //O alinhamento entre o loop e a função void recursiva, repete a quatidade vezes que a peça se moverá;
        break;
    
    }
    printf("\n");



    printf("Rainha ][\n");

    do //Bloco de código será executado ao mesmo tempo que chama a função void recursiva dentro da função principal (int main);
    {
        
        adiciona_rainha(rainha); //O alinhamento entre o loop e a função void recursiva, repete a quatidade vezes que a peça se moverá;

        break;

    } while (rainha <= 8); //Enquanto o valor for "true" e maior ou igual a 1, a peça continará se movendo até se tornar "false";
    printf("\n");



    //Estrutura de repetição aninhadas (for);
    //Movimentação em L: duas casas abaixo e uma casa a esquerda;
    // Cavalo: 1 vez em L para cima à direita;
    //movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break.
    //variáveis para loops avançados de múltiplas variáveis, condições e atualizações;

    printf("Cavalo ][\n");

    for(int cavalo = 1, cavalo_1 = 2;cavalo <= 2;cavalo++, cavalo_1--){ //Cada condição das variáveis executa um loop externo e outro interno;
        
        while(cavalo_1 <= 1){

            adiciona_cavalo(cavalo);
            
            break;

        }
    }

    return 0;
}
