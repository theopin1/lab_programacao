#include <stdio.h>

int main(){

unsigned char x;
unsigned char y;

printf("Digite um número qualquer: ");   
scanf("%hhu",&x);                           
printf("Digite um bit para ser desligado: ");
scanf("%hhu",&y);


printf("%hhu", x ^ (1 << y));


return 0;
    
}
