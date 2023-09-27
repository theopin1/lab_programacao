#include <stdio.h>
#include <string.h>
#define TAM 30
int main(){

    char str[TAM];
    int qtd = 0, i = 0;
    printf("Digite um nome: ");
    fgets(str, TAM, stdin);
    
      while (str[i]!= '\0'){
        i ++; 
        qtd++;
        }
    
    printf("%d",qtd - 1);
    
    return 0;
}
