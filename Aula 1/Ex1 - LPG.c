#include <stdio.h>

int main(void) {
  int num, dob;

  printf("Digite um número: \n");
  scanf("%d", &num);

  dob = num*2;
  
  printf("O dobro de %d é: %d", num, dob);

  return 0;
}
