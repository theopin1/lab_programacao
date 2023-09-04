#include <stdio.h>


int main(){

unsigned char x = 11;
unsigned char mask = 1;

unsigned char t;
puts("Equipamentos ligados");
for (int i = 0; i < 8; i++){
  t = (x >> i) & mask;
 
  if (t) printf("Equipamento:%d\n", i+1);
}



return 0;
}
