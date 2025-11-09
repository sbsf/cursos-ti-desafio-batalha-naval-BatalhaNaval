#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
int array_tab[10][10] = {0}; // declara e inicializa com zero

    // navios na posicao inicial
    int x_n1 = 2, y_n1 = 3; // início do navio vertical
    int tamanho1 = 4;   // tamanho do navio vertical

    int x_n2 = 6, y_n2 = 1; // início do navio horizontal
    int tamanho2 = 5;   // tamanho do navio horizontal

    // Colocar navio vertical
    for (int i = 0; i < tamanho1; i++) {
        array_tab[x_n1 + i][y_n1] = 1;
    }

    // Colocar navio horizontal
    for (int j = 0; j < tamanho2; j++) {
        array_tab[x_n2][y_n2 + j] = 1;
    }

    // Exibir coordenadas do navio vertical
    printf("coordenadas verticais:\n");
    for (int i = 0; i < tamanho1; i++) {
        printf("(%d, %d)\n", x_n1 + i, y_n1);
    }

    // Exibir coordenadas do navio horizontal
    printf("\ncoordenadas horizontais:\n");
    for (int j = 0; j < tamanho2; j++) {
        printf("(%d, %d)\n", x_n2, y_n2 + j);
    }
    return 0;
}
