#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(){

    srand(time(NULL));
    int v[TAM];
    int *pv = v;

    for(int i = 0; i < TAM; i ++ ){
        pv[i] = rand()%100;

        printf(" %d ", pv[i]);

    }
    return 0;

}
//100% original
