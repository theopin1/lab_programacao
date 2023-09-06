#include <stdio.h>

int main(){

unsigned char x;
unsigned char y;

printf("Digite um número qualquer: ");   //por algum motivo só funciona com valor fixo do X e do Y
scanf("%c",&x);                           
printf("Digite um bit para ser desligado: ");
scanf("%c\n",&y);


printf("%u\n", x & ~(1 << y));


return 0;
    
}
