#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

   int option,numarm;
   unsigned char n = 0;
   int x = 1;
   unsigned char r;
 while (x){
   printf("\nOcupar armário: 1\nLiberar armáro: 2\nsair: 3\n");
   scanf("%d",&option);

   switch (option)
   {
   
   case 1:
     if (n == 255){
         printf("Todos os armários estão ocupados");
     }
     else{
     do{ 
        r = rand()%8;
     } while (n & (1 << r));
     printf("%d ",n |= (1 << r));
    }
     break;
   
   case 2:
    printf("Digite o número do armário a ser liberado: ");
    scanf("%d",&numarm);
    printf("%hhu ", n &= ~(1 << (numarm - 1)));
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
