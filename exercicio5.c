/*
 * Matriz 2×3 - contar quantos elementos são maiores que 5
 */

#include <stdio.h>

int main(){
    int matriz[2][3], contador = 0;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 5){
                contador++;
            }
        }
    }

    printf("Quantidade de elementos maiores que 5: %d\n", contador);

    return 0;
}