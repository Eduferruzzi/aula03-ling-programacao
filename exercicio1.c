/*
 * Criar um programa que leia 4 números, armazene em um vetor e calcule a média.
 */

 #include <stdio.h>

int main(){
    float num[4], media = 0;

    for (int i = 0; i < 4; i++){
        printf("Digite um numero: ");
        scanf("%f", &num[i]);
        media += num[i];
    }

    media /= 4;

    printf("A media e: %.2f\n", media);

    return 0;
}
