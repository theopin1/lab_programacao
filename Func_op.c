#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_OPERACOES 3

void subtrair(int, int);
void somar(int, int);   
void multiplicar(int, int);
void dividir(int, int);

int main(int argc, char *argv[]) {
    void (*pFunc[])() = {somar, multiplicar, dividir, subtrair};
    int n, z;
    
    if (argc != 2){
        printf("Uso:\n\t %s operação\n\n",*argv);
        exit(1);
    }
    int codigooperacao = atoi(argv[1]);
    if ((codigooperacao < 0) || (codigooperacao >= QTD_OPERACOES)){
        puts("Operação não implementada");
        exit(2);
    }
    puts("Digite um número: ");
    scanf("%d",&n);
    puts("Digite um número: ");
    scanf("%d",&z);

    void somar(int n, int z){
        printf("Resultado é: %d", (n + z));
    }
    
    void multiplicar(int n, int z){
        printf("Resultado é: %d", (n * z));
    }
    
    void dividir(int n, int z){
        printf("Resultado é: %d", (n / z));
    }
    
    void subtrair(int n, int z){
        printf("Resultado é: %d", (n - z));
    }

    return 0;

}
