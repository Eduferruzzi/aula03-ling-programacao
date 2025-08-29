/*
 * Ler 5 números e mostrar apenas os números maiores que 10.
 */

 #include <stdio.h>

int main(){
    float num[5];
    
    for (int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%f", &num[i]);
    }

    for (int i = 0; i < 5; i++){
        if (num[i] > 10){
            printf("%.2f\n", num[i]);
        }
    }
    
    return 0;
}
