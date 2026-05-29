#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro [10][10];

    // Preenchendo o tabuleiro com água 

    for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
         }
    }
 
         // Coordenadas
        printf("Para letra A, digite 0\n");
        printf("Para letra B, digite 1\n");
        printf("Para letra C, digite 2\n");
        printf("Para letra D, digite 3\n");
        printf("Para letra E, digite 4\n");
        printf("Para letra F, digite 5\n");
        printf("Para letra G, digite 6\n");
        printf("Para letra H, digite 7\n");
        printf("Para letra I, digite 8\n");
        printf("Para letra J, digite 9\n");

         //Navio vertical
        tabuleiro [2][4] = 3;
        tabuleiro [3][4] = 3;
        tabuleiro [4][4] = 3;

          //Navio horizontal
        tabuleiro [7][1] = 3;
        tabuleiro [7][2] = 3;
        tabuleiro [7][3] = 3;

          //Mostrar tabuleiro
        for(int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro [i][j]);
            }
          printf("\n");

        }


    

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
