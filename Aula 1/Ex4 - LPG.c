#include <stdio.h>

int main(void) {
  int idade;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  if(idade >= 18){
    printf("O Usuario é maior de idade");
  } else {
    printf("O Usuario é menor de idade");
  }
}