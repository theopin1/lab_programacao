#include <stdio.h>

int main(){

float x;
    printf("Escreva o valor da conta: ");
    scanf("%f", &x);
    
    printf("O total com a taxa é: %.2f\n\n", x * 1.1 );
    
    return 0;
}
