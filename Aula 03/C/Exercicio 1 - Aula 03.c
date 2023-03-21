#include <stdio.h>

int main(void) {
  int num;
  printf("Digite um número: ");
  scanf("%d", &num);

  if (num % 2 != 1) {
    printf("Este número é par!");
  } else {
    printf("Este número é impar!");
  }
  return 0;
}