#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TAM 20
#define RANGE 2

struct Node{
	int x;
	int y;
	char *c;
	struct Node *prox;
};

void imprimir(struct Node *);

void inserir(int, int, const char *, struct Node *);

void gerarVet(char *);

int main(){
	int tm = 1;
	int n;
	
	struct Node h;

    char ram[TAM];

	srand(time(NULL));

	//system("clear");

	h.prox = NULL;

    gerarVet(ram);

	for (int i = 1; i < TAM + 1; i++){
		if (ram[i] == ram[i - 1]){
			tm++;
			 
		} else if (ram[i - 1] == 1) {
			 inserir(tm, (i - 1) - (tm - 1), "O", &h);
            tm = 1;
        } else if (ram[i - 1] == 0) {
			 inserir(tm, (i - 1) - (tm - 1), "L", &h);
            tm = 1;
        }

	}

	imprimir(&h);

	do {
        printf("\nEscolha uma operacao:\n");
        printf("1. Ocupar Memoria\n");
        printf("0. Sair\n");

        int pu;
        scanf("%d", &pu);

		switch(pu){
          case 0: 
		  	printf("Saindo do programa.\n");
            exit(1);
            break;
		  case 1:
                printf("Digite a quantidade de memória que deseja ocupar: ");
                scanf("%d", &n);

                // Ocupar memória conforme pedido do usuario
                struct Node *k = &h;
                while (k != NULL) {
                    if (n < k->x && strcmp(k->c, "L") == 0) {
                        inserir(k->x - n, k->y + n, "L", &h);
                        k->x = n;
                        k->c = "O";
                    } else if(n == k->x && strcmp(k->c, "L") == 0){
                        k->c = "O";
                    } else if (n > k->x && strcmp(k->c, "L") == 0){
                        printf("Memória insuficiente\n");
                        exit(1);
                    }
                    k = k->prox;
                    imprimir(&h);
                }
                break;

            default: 
                printf("Escolha invalida. Tente novamente.\n");
        }

    } while (h.prox != NULL);

	return 0;
}

void imprimir(struct Node *p){
	struct Node *k;
	
	printf("---\n");
	for (k=p->prox; k!=NULL; k=k->prox){
		puts("\nO tamanho desse espaço é: ");
		printf("%d\n",k->x);
		puts("Endereço: ");
		printf("%d\n",k->y);
		puts("Esse endereço está:");
		printf("%s\n",k->c);
	}

}

void inserir(int v,int t, const char *h, struct Node *p){
	struct Node *n;
	n = malloc(sizeof(struct Node));
	n->x = v;
	n->y = t;
	n->c = malloc(strlen(h) + 1);
	strcpy(n->c, h);
	n->prox = p->prox;
	p->prox = n;
}

void gerarVet(char *r){
   
   srand(time(NULL));
   for(int i = 0; i < TAM; i++){
    if(rand()%RANGE){
        r[i] = 1;
    }else 
        r[i] = 0;
   
   printf("%d",r[i]);
   }

}

