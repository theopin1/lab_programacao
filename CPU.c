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
