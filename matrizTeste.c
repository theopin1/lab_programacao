#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5




void criarMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = rand()%10;
        }
    }
}


void imprimirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%5d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    srand(time(NULL));
    
    int matriz[TAM][TAM];

    
    criarMatriz(matriz);

    imprimirMatriz(matriz);

    

    return 0;
}
