#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirnumero(int);

int main() {
    void (*pFunc)(int);
    int n;

    puts("Digite um número: ");
    scanf("%d", &n);

    pFunc = &imprimirnumero;
    
    (*pFunc)(n);
    //Imprimir número(n);
    return 0;
}

void imprimirnumero(int x){

    printf("O número fornecido é: %d\n",x);
}
