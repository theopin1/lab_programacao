#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define RANGE 2

struct Node{
	int x;
    int y;
	struct Node *prox;
};

void gerarVet(char *);


int main(){
   char ram[TAM];

   gerarVet(ram);


    return 0;
}

void gerarVet(char *r){
   
   srand(time(NULL));
   for(int i = 0; i < TAM; i++){
    if(rand()%RANGE){
        r[i] = 1;
    }else 
        r[i] = 0;
   }

}
