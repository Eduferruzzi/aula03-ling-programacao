/*
 * Matriz 3×3 - calcular soma da diagonal principal.
 */

#include <stdio.h>

int main(){
    int matriz[3][3], soma = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == j){
                soma += matriz[i][j];
            }
        }
    }

    printf("A soma da diagonal principal e: %d\n", soma);

    return 0;
}
