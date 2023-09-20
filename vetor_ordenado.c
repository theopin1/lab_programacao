#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MIN 0
#define QTD 100

int main(){

int x[TAM], k;

srand(time(NULL));

for (int k = 0; k < TAM; k++){
   x[k] = MIN + (rand() % QTD); 
}

puts("Vetor gerado antes da ordenação:");
for (int k = 0; k < TAM; k++){
  printf("[%p] %d\n", &x[k], x[k]);
}

for (int k = 0; k < TAM - 1; k++){
  for (int j = k + 1; j < TAM; k++){
    if (x[k] > x[j]){
      x[k] = x[k] ^ x[j];
      x[j] = x[k] ^ x[j];
      x[k] = x[k] ^ x[j];
    }
  }
}

puts("Vetor gerado depois da ordenação:");
for (int k = 0; k < TAM; k++){
  printf("[%p] %d\n", &x[k], x[k]);
}

return 0;
}
