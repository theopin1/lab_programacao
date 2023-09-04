#include <stdio.h>

int main(){

float x, y, z, a, b, c, t;

printf("Escreva os periodos dos tres eventos: ");
scanf("%f%f%f", &x, &y, &z); 

printf("Escreva os tempos de CPU dos tres eventos: ");
scanf("%f%f%f", &a, &b, &c); 

t = (a(float)/(float)x) + (b(float)/(float)y) + (c(float)/(float)z);

if (t <= 1)

printf("O sistema é escalonavel");

else

printf("O sistema não é escalonavel");

return 0;
}

// Jeito do prof:
#include <stdio.h>

#define N 3

int main(){

int c, p;
float tt; 

for (int i=0; i< N; i++){
  printf("Entre com o tempo de CPU:%d\n ",i+1);
  scanf("%d",&p);

  printf("Entre com o periodo:%d\n ",i+1);
  scanf("%d",&p);
  
  tt += ((float)c)/ p;
}

(tt>1)? puts("O sistema não é escalonavel"):puts("O sistema é escalonavel");

return 0;
}
