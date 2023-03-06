#include <stdio.h>

int main(void) {
  int a, b, soma, sub, div, resto;

  printf("Digite o primeiro número: \n");
  scanf("%d", &a);

  printf("Digite o segundo número: \n");
  scanf("%d", &b);

  soma = a+b;
  sub = a-b;
  div = a/b;
  resto = a%b;

  printf("A soma entre %d e %d é: %d \n", a, b, soma);

  printf("A subtração entre %d e %d é: %d \n", a, b, sub);

  printf("A divisão entre %d e %d é: %d \n", a, b, div);

  printf("A resto entre %d e %d é: %d \n", a, b, resto);

  return 0;
}
