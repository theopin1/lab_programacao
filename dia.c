#include <stdio.h>
int main(){



int n;

puts("Insira um número da semana: ");
scanf("%d",&n);

if(n == 1)
 puts("O dia da semana é: segunda");

else if (n == 2)
{
  puts("O dia da semana é: terça");
}
else if (n == 3)
{
  puts("O dia da semana é: quarta");
}
else if (n == 4)
{
   puts("O dia da semana é: quinta");
}
else if (n == 5)
{
   puts("O dia da semana é: sexta");
}
else if (n == 6)
{
   puts("O dia da semana é: sabado");
}
else if (n == 7)
{
   puts("O dia da semana é: domingo");
}
else
   puts("Número invalido");
