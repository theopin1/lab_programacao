#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
#define QTD 100

int main (){

int vet[MAX];

srand(time(NULL));

for (int k = 0; k < MAX; k++){
   vet[k] =(rand() % QTD); 
}


puts("Vetor gerado:");


puts("Vetor gerado antes da ordenação:");
for (int k = 0; k < MAX; k++){
  printf("[%p] %d\n", &vet[k], vet[k]);
}

printf("\nPrimeiro valor par: \n");
for (int k = 0; k < MAX; k++){
  if (!(vet[k] % 2)){
    printf("[%p] %d\n", &vet[k], vet[k]);
  break;
  }


}


    return 0;
}
