/*
 * Criar uma matriz 2×2, preenchê-la e encontrar o maior elemento.
 */

#include <stdio.h>

int main(){
    int matriz[2][2], maior;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }

    printf("O maior elemento da matriz e: %d\n", maior);

    return 0;
}
