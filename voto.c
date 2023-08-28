#include <stdio.h>

int main(){

int x;


printf("Digite um número: \n");
scanf("%d", &x);


if (x == 100)
printf("Você votou em x\n");

else if (x == 200)
{
   printf("Você votou em y\n");
}

else{
printf("Você votou nulo\n");
}



return 0;


}
