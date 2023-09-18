#include <stdio.h>
#include <stdlib.h>
int main(){

   int option;
   unsigned char n = 0;
   int x = 1;
   unsigned char r;
 while (x){
   printf("\nOcupar armário: 1\nLiberar armáro: 2\nsair: 3\n");
   scanf("%d",&option);

   switch (option)
   {
   
   case 1:
    r = rand()%8;
    printf("%hhu ", n | (1 << r));
    break;
   
   case 2:
    r = rand()%8;
    printf("%hhu ", n & (1 << r));
    break;
   
   case 3:
    x = 0;
    break;

   default:
     puts("Opção inválida");
    break;
   }
 }
   return 0;
}
